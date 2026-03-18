/*
 * XREFs of AuthzBasepFreeSecurityAttributeValues @ 0x14028AC10
 * Callers:
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x140204EA0 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x1402053E4 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14028AB90 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x140376790 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x14064A67C (AuthzBasepRollbackSecurityAttributeChanges.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x14064A5F8 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall AuthzBasepFreeSecurityAttributeValues(__int64 a1, char a2)
{
  void **v3; // rbx
  _DWORD *v4; // rcx
  int v5; // eax
  _QWORD *v6; // rax
  void **v7; // rdx
  __int64 *v8; // rbx
  __int64 *v9; // rsi
  _DWORD **v10; // rdx
  void **v11; // r8
  int v12; // eax
  __int64 *v13; // rbp

  if ( !a2 )
  {
    v3 = (void **)(a1 + 72);
    while ( 1 )
    {
      v4 = *v3;
      if ( *v3 == v3 )
        break;
      v5 = v4[8];
      if ( (v5 & 2) != 0 )
      {
        v10 = (_DWORD **)*((_QWORD *)v4 + 2);
        if ( v10[1] != v4 + 4 || (v11 = (void **)*((_QWORD *)v4 + 3), *v11 != v4 + 4) )
LABEL_18:
          __fastfail(3u);
        *v11 = v10;
        v10[1] = v11;
        v4[8] &= ~2u;
        v5 = v4[8];
        if ( a1 )
        {
          --*(_DWORD *)(a1 + 88);
          v5 = v4[8];
        }
      }
      if ( (v5 & 1) != 0 )
      {
        v6 = *(_QWORD **)v4;
        if ( *(_DWORD **)(*(_QWORD *)v4 + 8LL) != v4 )
          goto LABEL_18;
        v7 = (void **)*((_QWORD *)v4 + 1);
        if ( *v7 != v4 )
          goto LABEL_18;
        *v7 = v6;
        v6[1] = v7;
        v4[8] &= ~1u;
        if ( a1 )
        {
          --*(_DWORD *)(a1 + 60);
          if ( (v4[8] & 4) != 0 )
            --*(_DWORD *)(a1 + 64);
        }
      }
      ExFreePoolWithTag(v4, 0);
    }
  }
  v8 = (__int64 *)(a1 + 96);
  v9 = *(__int64 **)(a1 + 96);
  if ( (__int64 *)*v8 != v8 )
  {
    do
    {
      v12 = *((_DWORD *)v9 + 4);
      v13 = v9 - 2;
      v9 = (__int64 *)*v9;
      if ( (v12 & 1) == 0 )
      {
        AuthzBasepRemoveSecurityAttributeValueFromLists(a1, v13, 0LL);
        ExFreePoolWithTag(v13, 0);
      }
    }
    while ( v9 != v8 );
  }
}
