/*
 * XREFs of sub_140840F30 @ 0x140840F30
 * Callers:
 *     sub_140840DE0 @ 0x140840DE0 (sub_140840DE0.c)
 * Callees:
 *     sub_14081538C @ 0x14081538C (sub_14081538C.c)
 *     sub_140840FC4 @ 0x140840FC4 (sub_140840FC4.c)
 */

__int64 __fastcall sub_140840F30(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r9
  unsigned int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // rdx
  PSLIST_ENTRY v10; // rax

  v2 = 0;
  if ( a1 && a2 )
  {
    v5 = *(unsigned int *)(a1 + 52);
    v6 = 0;
    if ( (_DWORD)v5 )
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(a1 + 8LL * v6 + 1048);
        v8 = *(_QWORD *)a2 - *(_QWORD *)v7;
        if ( *(_QWORD *)a2 == *(_QWORD *)v7 )
          v8 = *(_QWORD *)(a2 + 8) - *(_QWORD *)(v7 + 8);
        if ( !v8 && *(_WORD *)(a2 + 16) == *(_WORD *)(v7 + 16) )
          break;
        if ( ++v6 >= (unsigned int)v5 )
          goto LABEL_12;
      }
      sub_140840FC4(*(_QWORD *)(a1 + 8LL * v6 + 1048), a2, v7, v5);
    }
    else
    {
LABEL_12:
      if ( (unsigned int)v5 < 0x10 )
      {
        v10 = sub_14081538C(0, 0x30u);
        if ( v10 )
        {
          *v10 = *(PSLIST_ENTRY)a2;
          v10[1] = *(PSLIST_ENTRY)(a2 + 16);
          v10[2] = *(PSLIST_ENTRY)(a2 + 32);
          *(_QWORD *)(a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 52))++ + 1048) = v10;
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
