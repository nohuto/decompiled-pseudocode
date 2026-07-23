/*
 * XREFs of sub_1409A295C @ 0x1409A295C
 * Callers:
 *     sub_1409A2D68 @ 0x1409A2D68 (sub_1409A2D68.c)
 * Callees:
 *     sub_1409A283C @ 0x1409A283C (sub_1409A283C.c)
 */

char __fastcall sub_1409A295C(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 v2; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  v1 = &unk_140C08FD0;
  v4 = 0;
  v2 = 6LL;
  do
  {
    if ( sub_1409A283C(a1, *((const WCHAR **)v1 - 1), &v4) == 1 )
      *v1 = v4;
    v1 += 6;
    --v2;
  }
  while ( v2 );
  if ( sub_1409A283C(a1, L"TtmDeviceCalloutCrashEnabled", &v5) == 1 && v5 )
    byte_140D048E8 = 1;
  return 1;
}
