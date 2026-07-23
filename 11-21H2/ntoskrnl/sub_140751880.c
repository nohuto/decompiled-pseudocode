/*
 * XREFs of sub_140751880 @ 0x140751880
 * Callers:
 *     sub_140255D5C @ 0x140255D5C (sub_140255D5C.c)
 *     sub_1403C0FF4 @ 0x1403C0FF4 (sub_1403C0FF4.c)
 *     sub_1406C0510 @ 0x1406C0510 (sub_1406C0510.c)
 *     sub_140751120 @ 0x140751120 (sub_140751120.c)
 *     sub_14075140C @ 0x14075140C (sub_14075140C.c)
 *     PoRegisterPowerSettingCallback @ 0x140762500 (PoRegisterPowerSettingCallback.c)
 *     sub_140808344 @ 0x140808344 (sub_140808344.c)
 * Callees:
 *     sub_140751908 @ 0x140751908 (sub_140751908.c)
 *     sub_14075197C @ 0x14075197C (sub_14075197C.c)
 */

__int64 *__fastcall sub_140751880(_QWORD *a1, int a2)
{
  __int64 **v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rcx

  v4 = (__int64 **)sub_140751908(a1);
  v5 = *v4;
  if ( (unsigned __int8)sub_14075197C(a1) )
  {
    while ( v5 != (__int64 *)v4 )
    {
      if ( *((_DWORD *)v5 + 12) == a2 && (*((_DWORD *)v5 + 13) & 4) == 0 )
        return v5;
      v5 = (__int64 *)*v5;
    }
  }
  else
  {
    while ( v5 != (__int64 *)v4 )
    {
      v6 = v5[4] - *a1;
      if ( !v6 )
        v6 = v5[5] - a1[1];
      if ( !v6 )
        return v5;
      v5 = (__int64 *)*v5;
    }
  }
  return 0LL;
}
