/*
 * XREFs of sub_1C00B5078 @ 0x1C00B5078
 * Callers:
 *     DllInitialize @ 0x1C0064410 (DllInitialize.c)
 * Callees:
 *     sub_1C0024588 @ 0x1C0024588 (sub_1C0024588.c)
 *     sub_1C00A0174 @ 0x1C00A0174 (sub_1C00A0174.c)
 *     sub_1C00B5114 @ 0x1C00B5114 (sub_1C00B5114.c)
 */

__int64 sub_1C00B5078()
{
  unsigned int v0; // ebx
  int **i; // rcx
  _BYTE *v2; // rax
  unsigned int v3; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( dword_1C0093B38 )
    return 0LL;
  dword_1C0093B38 = 1;
  v5 = RtlQueryFeatureConfigurationChangeStamp();
  sub_1C00B5114();
  sub_1C00A0174();
  for ( i = &off_1C0092D18; ; i = (int **)(v2 + 56) )
  {
    v2 = sub_1C0024588(i);
    if ( !v2 )
      break;
    if ( !v2[29] && !v2[30] && !v2[28] )
    {
      v3 = RtlRegisterFeatureConfigurationChangeNotification(sub_1C00A0330, 0LL, &v5, &qword_1C0093B30);
      if ( !v3 )
        return 0LL;
      qword_1C0093B30 = 0LL;
      return v3;
    }
  }
  return v0;
}
