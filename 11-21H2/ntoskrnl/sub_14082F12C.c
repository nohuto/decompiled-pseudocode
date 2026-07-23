/*
 * XREFs of sub_14082F12C @ 0x14082F12C
 * Callers:
 *     sub_140657398 @ 0x140657398 (sub_140657398.c)
 *     sub_14082F108 @ 0x14082F108 (sub_14082F108.c)
 *     sub_14082F3C4 @ 0x14082F3C4 (sub_14082F3C4.c)
 *     sub_14082F95C @ 0x14082F95C (sub_14082F95C.c)
 *     sub_14083D474 @ 0x14083D474 (sub_14083D474.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_14091EEC4 @ 0x14091EEC4 (sub_14091EEC4.c)
 *     sub_140920AB4 @ 0x140920AB4 (sub_140920AB4.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C5F80 @ 0x1407C5F80 (sub_1407C5F80.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_1407CD270 @ 0x1407CD270 (sub_1407CD270.c)
 *     sub_14082F314 @ 0x14082F314 (sub_14082F314.c)
 */

__int64 __fastcall sub_14082F12C(ULONG_PTR BugCheckParameter3, __int64 a2, const UNICODE_STRING *a3, _DWORD *a4)
{
  __int64 v5; // rsi
  unsigned int v9; // ebx
  ULONG_PTR v10; // rdx
  _WORD *v11; // rax
  unsigned int v12; // eax
  _QWORD v14[2]; // [rsp+30h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp+30h] BYREF
  int v16; // [rsp+88h] [rbp+48h] BYREF

  LODWORD(BugCheckParameter4) = 0;
  v16 = 0;
  v5 = 0LL;
  v14[0] = 0xFFFFFFFFLL;
  v9 = -1073741772;
  *a4 = -1;
  if ( !*(_DWORD *)(BugCheckParameter3 + 216) )
    return v9;
  while ( 1 )
  {
    if ( !*(_DWORD *)(a2 + 4 * v5 + 20) )
      goto LABEL_17;
    v10 = *(unsigned int *)(a2 + 4 * v5 + 28);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v11 = (_WORD *)sub_1406BF400(BugCheckParameter3, v10, v14);
    else
      v11 = (_WORD *)sub_1407C9820(BugCheckParameter3, v10, (unsigned int *)v14);
    if ( !v11 )
      return (unsigned int)-1073741670;
    if ( *v11 == 26994 )
      break;
LABEL_7:
    if ( *v11 == 26732 )
      v12 = sub_14082F314(BugCheckParameter3, v11, a3, &BugCheckParameter4);
    else
      v12 = sub_1407CD270(BugCheckParameter3, (__int64)v11, a3, 0LL, &BugCheckParameter4, &v16);
    v9 = v12;
    if ( (int)(v12 + 0x80000000) >= 0 && v12 != -1073741772 )
      goto LABEL_12;
    if ( (_DWORD)BugCheckParameter4 != -1 )
    {
      *a4 = BugCheckParameter4;
      v9 = 0;
      goto LABEL_12;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, v14);
    else
      sub_1407C97C0(BugCheckParameter3, (unsigned int *)v14);
LABEL_17:
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= *(_DWORD *)(BugCheckParameter3 + 216) )
      return v9;
  }
  if ( (int)sub_1407C5F80(BugCheckParameter3, (__int64)v11, a3, 0LL, (int *)&BugCheckParameter4) >= 0 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, v14);
    else
      sub_1407C97C0(BugCheckParameter3, (unsigned int *)v14);
    if ( (_DWORD)BugCheckParameter4 == -1 )
      goto LABEL_17;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v11 = (_WORD *)sub_1406BF400(BugCheckParameter3, (unsigned int)BugCheckParameter4, v14);
    else
      v11 = (_WORD *)sub_1407C9820(BugCheckParameter3, BugCheckParameter4, (unsigned int *)v14);
    if ( !v11 )
      return (unsigned int)-1073741670;
    goto LABEL_7;
  }
  v9 = -1073741670;
LABEL_12:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, v14);
  else
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)v14);
  return v9;
}
