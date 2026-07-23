/*
 * XREFs of sub_14052FCD0 @ 0x14052FCD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14052FB58 @ 0x14052FB58 (sub_14052FB58.c)
 */

char __fastcall sub_14052FCD0(__int64 a1, char a2, unsigned int a3, _DWORD *a4)
{
  ULONG_PTR *v5; // rbx
  int v6; // edx
  char v7; // di
  ULONG_PTR v9; // rax
  ULONG_PTR v10; // rax
  ULONG_PTR v11; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR v13; // [rsp+38h] [rbp-28h]
  ULONG_PTR BugCheckParameter4; // [rsp+40h] [rbp-20h] BYREF
  ULONG_PTR v15; // [rsp+48h] [rbp-18h]

  v5 = (ULONG_PTR *)(*(_QWORD *)(a1 + 288) + 16LL * a3);
  if ( (*v5 & 1) == 0 && (a4[3] & 0x10) == 0 )
    return 0;
  v6 = a4[3];
  v7 = 0;
  BugCheckParameter3 = 0LL;
  v13 = 0LL;
  if ( (v6 & 0x10) != 0 )
  {
    switch ( a4[5] )
    {
      case 1:
        v10 = BugCheckParameter3;
        if ( (v6 & 2) != 0 )
        {
          BugCheckParameter3 = BugCheckParameter3 & 0xFFFFFFFFFFFFFF1FuLL | 0x20;
          v9 = v10 & 0xFFFFFFFFFFFFFF17uLL | 0x28;
        }
        else
        {
          v9 = BugCheckParameter3;
        }
        break;
      case 2:
        v9 = BugCheckParameter3 & 0xFFFFFFFFFFFFFF1FuLL | 0x80;
        break;
      case 3:
        v9 = BugCheckParameter3 & 0xFFFFFFFFFFFFFF1FuLL | 0x40;
        break;
      default:
        return 0;
    }
    BugCheckParameter3 = v9;
    if ( (a4[3] & 0x10) != 0 )
      BugCheckParameter3 |= 1uLL;
    if ( a4[2] == 1 )
      v11 = BugCheckParameter3 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v11 = BugCheckParameter3 | 0x10;
    BugCheckParameter3 = v11;
    BugCheckParameter3 = ((unsigned __int64)(unsigned __int8)a4[12] << 16) | v11 & 0xFFFFFFFFFF00FFFFuLL;
    if ( a2 )
      BugCheckParameter3 |= 0x100uLL;
    sub_14052FB58(&BugCheckParameter3, a4 + 6);
  }
  if ( (*v5 & 1) != 0 && (BugCheckParameter3 & 1) != 0 )
  {
    BugCheckParameter4 = BugCheckParameter3 ^ *v5;
    v15 = v13 ^ v5[1];
    BugCheckParameter4 = (unsigned int)BugCheckParameter4;
    if ( (_DWORD)BugCheckParameter4 || v15 )
      KeBugCheckEx(0x5Cu, 0x7000uLL, 0x20uLL, (ULONG_PTR)v5, (ULONG_PTR)&BugCheckParameter4);
  }
  if ( *v5 != BugCheckParameter3 || v5[1] != v13 )
  {
    v7 = 1;
    v5[1] = v13;
    *v5 = BugCheckParameter3;
  }
  return v7;
}
