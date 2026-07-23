/*
 * XREFs of BroadcastFunction @ 0x140A48E70
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020F26C @ 0x14020F26C (sub_14020F26C.c)
 *     KeRemoveQueueDpc @ 0x14024E180 (KeRemoveQueueDpc.c)
 *     sub_1402A8670 @ 0x1402A8670 (sub_1402A8670.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     sub_14038B894 @ 0x14038B894 (sub_14038B894.c)
 *     sub_14038B8A0 @ 0x14038B8A0 (sub_14038B8A0.c)
 *     HalCalibratePerformanceCounter @ 0x14038B8D0 (HalCalibratePerformanceCounter.c)
 *     sub_1403A493C @ 0x1403A493C (sub_1403A493C.c)
 *     sub_1403B65D8 @ 0x1403B65D8 (sub_1403B65D8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall BroadcastFunction(ULONG_PTR Argument)
{
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v3; // ebp
  char v4; // bp
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  LARGE_INTEGER v8; // r9
  unsigned __int64 v9; // kr00_8
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rcx
  unsigned __int64 v14; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v16; // [rsp+30h] [rbp-58h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-48h]
  LARGE_INTEGER v19; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-38h]
  LARGE_INTEGER *v21; // [rsp+58h] [rbp-30h] BYREF
  int v22; // [rsp+60h] [rbp-28h]
  int v23; // [rsp+64h] [rbp-24h]
  unsigned int v24; // [rsp+80h] [rbp-8h]

  v19.QuadPart = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  PerformanceFrequency.QuadPart = 0LL;
  if ( *((_DWORD *)CurrentPrcb + 9) == *(_DWORD *)(Argument + 4) )
  {
    _disable();
    v6 = *(_QWORD *)(Argument + 8);
    v3 = v24 >> 9;
    v18 = v6;
    v7 = MEMORY[0xFFFFF78000000008] + v6;
    v20 = MEMORY[0xFFFFF78000000008] + v6;
    v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( *(_BYTE *)Argument )
    {
      LODWORD(v16) = (__PAIR64__(HIDWORD(v18), v6) * PerformanceFrequency.QuadPart) >> 32;
      HIDWORD(v16) = PerformanceFrequency.HighPart * HIDWORD(v18)
                   + (((((unsigned int)v6 * (unsigned __int64)PerformanceFrequency.LowPart) >> 32)
                     + PerformanceFrequency.LowPart * (unsigned __int64)HIDWORD(v18)
                     + (unsigned int)v6 * (unsigned __int64)(unsigned int)PerformanceFrequency.HighPart) >> 32);
      v9 = v16;
      LODWORD(v16) = v6 * PerformanceFrequency.LowPart;
      *(_DWORD *)(Argument + 20) = v9 / 0x989680;
      HIDWORD(v16) = v9 % 0x989680;
      *(_DWORD *)(Argument + 16) = v16 / 0x989680;
      *(_QWORD *)(Argument + 16) += v8.QuadPart;
    }
    v18 = v7 / DesiredTime;
    v10 = *(_QWORD *)(Argument + 8);
    dword_140C4F028 = DesiredTime - v7 % DesiredTime;
    MEMORY[0xFFFFF780000003B0] += v10;
    if ( MEMORY[0xFFFFF780000003B0] < 0 )
      __fastfail(5u);
    sub_14020F26C((signed __int64 *)0xFFFFF78000000340LL);
    MEMORY[0xFFFFF78000000010] = HIDWORD(v20);
    MEMORY[0xFFFFF78000000008] = v7;
    MEMORY[0xFFFFF78000000328] = HIDWORD(v18);
    MEMORY[0xFFFFF78000000320] = v11;
    MEMORY[0xFFFFF78000000350] = v12;
    qword_140C547E8 = 0LL;
    sub_1403B65D8(v13);
    *(_DWORD *)(Argument + 28) = 0;
  }
  else
  {
    _disable();
    v3 = v24 >> 9;
    do
      sub_14038B894();
    while ( *(_DWORD *)(Argument + 28) );
  }
  v4 = v3 & 1;
  if ( sub_1402A8670((__int64)CurrentPrcb, 1) )
  {
    v14 = MEMORY[0xFFFFF78000000008];
    KeRemoveQueueDpc((PRKDPC)((char *)CurrentPrcb + 32496));
    KeInsertQueueDpc((PRKDPC)((char *)CurrentPrcb + 32496), (PVOID)((unsigned int)(v14 >> 18) - 256), 0LL);
  }
  *((_DWORD *)CurrentPrcb + 3312) = MEMORY[0xFFFFF78000000320];
  v5 = *(_QWORD *)(Argument + 8);
  if ( *(_BYTE *)Argument )
  {
    HalCalibratePerformanceCounter((volatile signed __int32 *)(Argument + 24), *(_QWORD *)(Argument + 16));
    sub_14038B8A0();
    if ( (xmmword_140D06910 & 0x8000) != 0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v23 = 0;
      v19 = PerformanceCounter;
      v22 = 8;
      v21 = &v19;
      sub_14035EDE4((__int64)&v21, 1u, 0x80008000, 0x1232u, 0x401802u);
    }
  }
  if ( *((_BYTE *)CurrentPrcb + 33) )
    sub_1403A493C(v5, 0LL, 3);
  if ( v4 )
    _enable();
}
