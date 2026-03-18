/*
 * XREFs of AuthzBasepAddSecurityAttributeValues @ 0x140204954
 * Callers:
 *     AuthzBasepAddSecurityAttribute @ 0x1402047C4 (AuthzBasepAddSecurityAttribute.c)
 * Callees:
 *     AuthzBasepAddSecurityAttributeValueToLists @ 0x140204AE4 (AuthzBasepAddSecurityAttributeValueToLists.c)
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x140204FE0 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x140205030 (AuthzBasepFindSecurityAttributeValue.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x14064A5F8 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 */

__int64 __fastcall AuthzBasepAddSecurityAttributeValues(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 SecurityAttributeValue; // rax
  __int64 v9; // rdx
  unsigned int v10; // edx
  __int64 v11; // rbp
  __int64 v12; // r9
  unsigned __int16 v13; // ax
  void *v15; // rcx
  size_t v16; // r8
  const void *v17; // rdx
  int v18; // eax
  unsigned int v19; // edx

  if ( *(_WORD *)(a1 + 48) == *(_WORD *)(a2 + 16) )
  {
    v4 = 0;
    v5 = 0;
    if ( *(_DWORD *)(a2 + 24) )
    {
      while ( 1 )
      {
        v6 = *(unsigned __int16 *)(a1 + 48);
        if ( !(_WORD)v6 )
          return (unsigned int)-1073741811;
        if ( (unsigned __int16)v6 <= 2u )
        {
LABEL_5:
          v7 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL * v5);
          goto LABEL_6;
        }
        if ( (_WORD)v6 == 3 )
          goto LABEL_19;
        if ( (_WORD)v6 == 6 )
          goto LABEL_5;
        if ( (_WORD)v6 != 4 )
          break;
        v7 = *(_QWORD *)(a2 + 32) + 24LL * v5;
LABEL_6:
        SecurityAttributeValue = AuthzBasepFindSecurityAttributeValue(a1, v7, v6, a1);
        v9 = SecurityAttributeValue;
        if ( !SecurityAttributeValue )
        {
          v10 = 0;
          switch ( *(_WORD *)(a2 + 16) )
          {
            case 3:
              v10 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 16LL * v5);
              break;
            case 4:
              v10 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 24LL * v5 + 8);
              break;
            case 5:
            case 0x10:
              v10 = *(_DWORD *)(*(_QWORD *)(a2 + 32) + 16LL * v5 + 8);
              break;
          }
          v11 = AuthzBasepAllocateSecurityAttributeValue(v10);
          if ( !v11 )
            return (unsigned int)-1073741670;
          v13 = *(_WORD *)(a2 + 16);
          if ( v13 )
          {
            if ( v13 <= 2u )
              goto LABEL_14;
            switch ( v13 )
            {
              case 3u:
                v15 = (void *)(v11 + 64);
                v16 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 16LL * v5);
                *(_WORD *)(v11 + 40) = v16;
                *(_WORD *)(v11 + 42) = v16;
                *(_QWORD *)(v11 + 48) = v11 + 64;
                v17 = *(const void **)(*(_QWORD *)(a2 + 32) + 16LL * v5 + 8);
                goto LABEL_22;
              case 6u:
LABEL_14:
                *(_QWORD *)(v11 + 40) = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL * v5);
                break;
              case 4u:
                *(_QWORD *)(v11 + 40) = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 24LL * v5);
                v15 = (void *)(v11 + 64);
                v19 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 24LL * v5 + 8);
                *(_WORD *)(v11 + 48) = v19;
                v16 = v19;
                *(_QWORD *)(v11 + 56) = v11 + 64;
                v17 = *(const void **)(*(_QWORD *)(a2 + 32) + 24LL * v5 + 16);
LABEL_22:
                memmove(v15, v17, v16);
                break;
              case 5u:
              case 0x10u:
                v15 = (void *)(v11 + 64);
                v16 = *(unsigned int *)(*(_QWORD *)(a2 + 32) + 16LL * v5 + 8);
                *(_DWORD *)(v11 + 48) = v16;
                *(_QWORD *)(v11 + 40) = v11 + 64;
                v17 = *(const void **)(*(_QWORD *)(a2 + 32) + 16LL * v5);
                goto LABEL_22;
            }
          }
          LOBYTE(v12) = 1;
          AuthzBasepAddSecurityAttributeValueToLists(a1, v11, 0LL, v12);
          goto LABEL_16;
        }
        v18 = *(_DWORD *)(SecurityAttributeValue + 32);
        if ( (v18 & 4) == 0 )
          return (unsigned int)-1073741771;
        *(_DWORD *)(v9 + 32) = v18 & 0xFFFFFFFB;
        AuthzBasepRemoveSecurityAttributeValueFromLists(a1, v9, 0LL);
        --*(_DWORD *)(a1 + 64);
LABEL_16:
        if ( ++v5 >= *(_DWORD *)(a2 + 24) )
          return v4;
      }
      if ( (_WORD)v6 != 5 && (_WORD)v6 != 16 )
        return (unsigned int)-1073741811;
LABEL_19:
      v7 = *(_QWORD *)(a2 + 32) + 16LL * v5;
      goto LABEL_6;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
