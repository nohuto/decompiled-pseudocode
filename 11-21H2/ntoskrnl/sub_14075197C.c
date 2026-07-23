/*
 * XREFs of sub_14075197C @ 0x14075197C
 * Callers:
 *     sub_140751120 @ 0x140751120 (sub_140751120.c)
 *     sub_14075140C @ 0x14075140C (sub_14075140C.c)
 *     sub_140751880 @ 0x140751880 (sub_140751880.c)
 *     sub_140751908 @ 0x140751908 (sub_140751908.c)
 *     PoRegisterPowerSettingCallback @ 0x140762500 (PoRegisterPowerSettingCallback.c)
 *     sub_1407FD344 @ 0x1407FD344 (sub_1407FD344.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14075197C(_QWORD *a1)
{
  char v1; // dl
  char *v2; // r10
  unsigned int v3; // r9d
  __int64 v4; // r8

  v1 = 0;
  v2 = (char *)&off_140008168;
  v3 = 0;
  while ( 1 )
  {
    v4 = **(_QWORD **)v2 - *a1;
    if ( !v4 )
      v4 = *(_QWORD *)(*(_QWORD *)v2 + 8LL) - a1[1];
    if ( !v4 )
      break;
    ++v3;
    v2 += 8;
    if ( v3 >= 2 )
      return v1;
  }
  return 1;
}
