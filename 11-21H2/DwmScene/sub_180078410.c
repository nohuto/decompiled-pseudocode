/*
 * XREFs of sub_180078410 @ 0x180078410
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003BCD0 @ 0x18003BCD0 (sub_18003BCD0.c)
 *     sub_1800441CC @ 0x1800441CC (sub_1800441CC.c)
 *     sub_1800441E4 @ 0x1800441E4 (sub_1800441E4.c)
 *     sub_180079890 @ 0x180079890 (sub_180079890.c)
 */

int __fastcall sub_180078410(__int64 a1)
{
  _BYTE *v2; // rax
  char v3; // dl
  _BYTE *v4; // rax
  char v5; // dl
  _BYTE *v6; // rax
  char v7; // dl
  _BYTE *v8; // rax
  char v9; // dl
  _BYTE *v10; // rax
  char v11; // dl
  int v12; // eax
  char v14; // [rsp+30h] [rbp+8h] BYREF

  sub_18003BCD0((_QWORD *)a1);
  v14 = 0;
  sub_1800441E4((__int64)&v14);
  v2 = (_BYTE *)sub_1800441CC(a1 + 1464);
  *v2 = v3;
  v14 = 0;
  sub_1800441E4((__int64)&v14);
  v4 = (_BYTE *)sub_1800441CC(a1 + 1465);
  *v4 = v5;
  v14 = 0;
  sub_1800441E4((__int64)&v14);
  v6 = (_BYTE *)sub_1800441CC(a1 + 1467);
  *v6 = v7;
  v14 = 0;
  sub_1800441E4((__int64)&v14);
  v8 = (_BYTE *)sub_1800441CC(a1 + 1468);
  *v8 = v9;
  v14 = 0;
  sub_1800441E4((__int64)&v14);
  v10 = (_BYTE *)sub_1800441CC(a1 + 1466);
  *v10 = v11;
  v12 = Mtx_lock((_Mtx_t)(a1 + 1552));
  if ( v12 )
  {
    std::_Throw_C_error(v12);
    __debugbreak();
  }
  sub_180079890(a1 + 1488);
  return Mtx_unlock((_Mtx_t)(a1 + 1552));
}
