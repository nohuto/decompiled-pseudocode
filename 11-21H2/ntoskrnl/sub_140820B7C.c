/*
 * XREFs of sub_140820B7C @ 0x140820B7C
 * Callers:
 *     sub_14082071C @ 0x14082071C (sub_14082071C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1408217D8 @ 0x1408217D8 (sub_1408217D8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140820B7C(_QWORD *a1, unsigned int a2, unsigned int a3, int a4, __int64 a5, _QWORD *a6)
{
  unsigned int v6; // ebp
  char v10; // r14
  _DWORD *Pool2; // rdi
  _DWORD *v12; // rsi
  __int64 *v13; // rax
  unsigned int v15; // r11d
  _QWORD *v16; // r9
  __int64 v17; // rcx
  int v18; // eax
  _DWORD *v19; // rcx
  bool v21; // [rsp+98h] [rbp+20h]

  v6 = 0;
  v10 = 0;
  v21 = a4 == 1;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 20LL, 538996816LL);
  if ( !Pool2 )
    return 3221225626LL;
  v12 = (_DWORD *)ExAllocatePool2(256LL, 20LL, 538996816LL);
  if ( !v12 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221225626LL;
  }
  *(_OWORD *)Pool2 = *(_OWORD *)a5;
  Pool2[4] = *(_DWORD *)(a5 + 16);
  if ( a1 || (a1 = (_QWORD *)sub_1408217D8(a2, a3)) != 0LL )
  {
    while ( !v10 )
    {
      if ( a1 != qword_140C46278 || v21 )
      {
        v13 = (__int64 *)a1[63];
        if ( v13 != a1 + 63 )
        {
          while ( *((_BYTE *)v13 + 16) != *(_BYTE *)a5 )
          {
            v13 = (__int64 *)*v13;
            if ( v13 == a1 + 63 )
              goto LABEL_7;
          }
          v17 = v13[3];
          if ( v17 )
          {
            v18 = sub_14042A5E0(*(_QWORD *)(v17 + 8), Pool2);
            v6 = v18;
            v19 = Pool2;
            if ( v18 < 0 )
            {
              ExFreePoolWithTag(Pool2, 0);
              goto LABEL_10;
            }
            Pool2 = v12;
            if ( v18 == 288 )
              v10 = 1;
            v12 = v19;
          }
        }
LABEL_7:
        a1 = (_QWORD *)a1[2];
      }
      else
      {
        v21 = 1;
        a1 = (_QWORD *)sub_1408217D8(a2, a3);
        if ( a1 == v16 && !a2 )
          a1 = (_QWORD *)sub_1408217D8(v15, 0LL);
      }
      if ( !a1 )
        break;
    }
  }
  *a6 = Pool2;
LABEL_10:
  ExFreePoolWithTag(v12, 0);
  return v6;
}
