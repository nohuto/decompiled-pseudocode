/*
 * XREFs of IoCopyDeviceObjectHint @ 0x1409361B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402A38B4 @ 0x1402A38B4 (sub_1402A38B4.c)
 *     sub_1402A3A14 @ 0x1402A3A14 (sub_1402A3A14.c)
 */

__int64 __fastcall IoCopyDeviceObjectHint(__int64 a1, __int64 a2)
{
  int v3; // edx
  _QWORD *v4; // r8
  unsigned int v6; // edx
  _QWORD *v7; // rbx
  __int64 v8; // r8
  unsigned int v9; // r10d
  __int64 v10; // r11
  __int64 v11; // [rsp+28h] [rbp-10h]
  _QWORD *v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = (_QWORD *)sub_1402A3A14(a2, 1, 0LL);
  if ( v12 )
    return 3221225473LL;
  v7 = (_QWORD *)sub_1402A3A14(a1, v3, v4);
  if ( v7 )
  {
    v9 = sub_1402A38B4(v10, v6, 0x20u, v6, &v12, (_QWORD *)(v8 & v11));
    if ( !v9 )
      *v12 = *v7;
  }
  return v9;
}
