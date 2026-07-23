/*
 * XREFs of HalCalibratePerformanceCounter @ 0x14038B8D0
 * Callers:
 *     sub_14050DBB0 @ 0x14050DBB0 (sub_14050DBB0.c)
 *     BroadcastFunction @ 0x140A48E70 (BroadcastFunction.c)
 * Callees:
 *     sub_140229A90 @ 0x140229A90 (sub_140229A90.c)
 *     sub_14022DA40 @ 0x14022DA40 (sub_14022DA40.c)
 *     sub_14038B7AC @ 0x14038B7AC (sub_14038B7AC.c)
 *     sub_1403A572C @ 0x1403A572C (sub_1403A572C.c)
 *     sub_1403B53D4 @ 0x1403B53D4 (sub_1403B53D4.c)
 */

__int64 __fastcall HalCalibratePerformanceCounter(volatile signed __int32 *a1, __int64 a2)
{
  int LockArray_high; // r11d
  __int64 v3; // rsi
  ULONG_PTR v4; // rbx
  __int64 result; // rax
  char v7; // bp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r11
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  v3 = a2;
  v4 = qword_140C4E390;
  v13 = 0LL;
  if ( *(_DWORD *)(qword_140C4E390 + 228) == 5 )
    v3 = sub_1403A572C(a2, 10000000LL, *(_QWORD *)(qword_140C4E390 + 192));
  if ( v4 != qword_140C4E388 )
  {
    v10 = *(_QWORD *)(qword_140C4E388 + 192);
    if ( *(_DWORD *)(qword_140C4E388 + 228) == 5 )
      v10 = 10000000LL;
    v3 = sub_1403A572C(v3, v10, *(_QWORD *)(v4 + 192));
  }
  if ( !LockArray_high )
  {
    v7 = sub_14038B7AC(&v13, 0LL);
    sub_1403B53D4(v4, v3);
    if ( qword_140C4E500 )
    {
      v11 = sub_1403A572C(v3, *(_QWORD *)(v4 + 192), *(_QWORD *)(qword_140C4E500 + 192));
      sub_1403B53D4(v12, v11);
    }
    if ( v7 )
      sub_14022DA40(&v13, v8, v9);
  }
  sub_140229A90();
  _InterlockedDecrement(a1);
  do
  {
    _mm_pause();
    result = *(unsigned int *)a1;
  }
  while ( (int)result > 0 );
  return result;
}
