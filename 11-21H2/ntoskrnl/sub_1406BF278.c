/*
 * XREFs of sub_1406BF278 @ 0x1406BF278
 * Callers:
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_1406BF110 @ 0x1406BF110 (sub_1406BF110.c)
 *     sub_140914324 @ 0x140914324 (sub_140914324.c)
 *     sub_14091EEC4 @ 0x14091EEC4 (sub_14091EEC4.c)
 *     sub_14091FEFC @ 0x14091FEFC (sub_14091FEFC.c)
 *     sub_140920AB4 @ 0x140920AB4 (sub_140920AB4.c)
 *     sub_140921078 @ 0x140921078 (sub_140921078.c)
 *     sub_14092183C @ 0x14092183C (sub_14092183C.c)
 *     sub_1409222C0 @ 0x1409222C0 (sub_1409222C0.c)
 *     sub_140AB4A4C @ 0x140AB4A4C (sub_140AB4A4C.c)
 *     sub_140B141E0 @ 0x140B141E0 (sub_140B141E0.c)
 *     sub_140B146C4 @ 0x140B146C4 (sub_140B146C4.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C82B0 @ 0x1407C82B0 (sub_1407C82B0.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_1406BF278(ULONG_PTR BugCheckParameter3, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v6; // eax
  ULONG_PTR v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // ebx
  int v11; // [rsp+38h] [rbp+10h] BYREF
  int v12; // [rsp+3Ch] [rbp+14h]

  v11 = -1;
  v12 = 0;
  v6 = a2[5];
  *a4 = -1;
  if ( a3 >= v6 )
  {
    if ( *(_DWORD *)(BugCheckParameter3 + 216) <= 1u || a3 - v6 >= a2[6] )
      return 0;
    v7 = (unsigned int)a2[8];
  }
  else
  {
    v7 = (unsigned int)a2[7];
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v8 = sub_1406BF400(BugCheckParameter3, v7);
  else
    v8 = sub_1407C9820(BugCheckParameter3);
  v9 = 0;
  if ( v8 )
  {
    *a4 = sub_1407C82B0(BugCheckParameter3);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v11);
    else
      sub_1407C97C0(BugCheckParameter3, &v11);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v9;
}
