/*
 * XREFs of sub_1408619F4 @ 0x1408619F4
 * Callers:
 *     sub_140861984 @ 0x140861984 (sub_140861984.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 */

__int64 __fastcall sub_1408619F4(_DWORD *a1)
{
  __int64 result; // rax
  _QWORD v3[15]; // [rsp+30h] [rbp-78h] BYREF
  int v4; // [rsp+B8h] [rbp+10h] BYREF

  v4 = 0;
  memset(v3, 0, 0x70uLL);
  LODWORD(v3[1]) = 292;
  LODWORD(v3[4]) = 67108868;
  v3[2] = L"NumberOfInitialSessions";
  v3[3] = &v4;
  result = sub_140781F40(2, L"Session Manager", (__int64)v3, 0LL);
  if ( (int)result >= 0 )
    *a1 = v4;
  return result;
}
