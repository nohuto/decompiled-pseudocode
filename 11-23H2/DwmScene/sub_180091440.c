/*
 * XREFs of sub_180091440 @ 0x180091440
 * Callers:
 *     sub_1800904E0 @ 0x1800904E0 (sub_1800904E0.c)
 *     sub_180090AB8 @ 0x180090AB8 (sub_180090AB8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180091440(_QWORD *a1, _QWORD *a2, unsigned int a3)
{
  _DWORD *v5; // rax
  _DWORD *v6; // rdi
  _QWORD *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v5 = (_DWORD *)o__errno();
  v6 = v5;
  if ( a1[3] >= 0x10uLL )
    a1 = (_QWORD *)*a1;
  *v5 = 0;
  o_strtol(a1, &v7, a3);
  if ( a1 == v7 )
  {
    std::_Xinvalid_argument("invalid stoi argument");
    __debugbreak();
  }
  if ( *v6 == 34 )
  {
    std::_Xout_of_range("stoi argument out of range");
    __debugbreak();
  }
}
