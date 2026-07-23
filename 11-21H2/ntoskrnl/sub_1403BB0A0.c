/*
 * XREFs of sub_1403BB0A0 @ 0x1403BB0A0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     sub_14036FA84 @ 0x14036FA84 (sub_14036FA84.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_1403B54DC @ 0x1403B54DC (sub_1403B54DC.c)
 *     sub_1403B9904 @ 0x1403B9904 (sub_1403B9904.c)
 *     sub_1403BA9B4 @ 0x1403BA9B4 (sub_1403BA9B4.c)
 *     sub_1403BAA84 @ 0x1403BAA84 (sub_1403BAA84.c)
 *     sub_1403BAB70 @ 0x1403BAB70 (sub_1403BAB70.c)
 *     sub_1403BACF8 @ 0x1403BACF8 (sub_1403BACF8.c)
 *     sub_1403BAF00 @ 0x1403BAF00 (sub_1403BAF00.c)
 *     sub_1403BB340 @ 0x1403BB340 (sub_1403BB340.c)
 *     sub_1403BB3F0 @ 0x1403BB3F0 (sub_1403BB3F0.c)
 *     sub_1403BB500 @ 0x1403BB500 (sub_1403BB500.c)
 *     sub_1403BB5A0 @ 0x1403BB5A0 (sub_1403BB5A0.c)
 *     sub_1403BBAC8 @ 0x1403BBAC8 (sub_1403BBAC8.c)
 *     sub_1403BBDD4 @ 0x1403BBDD4 (sub_1403BBDD4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140502E6C @ 0x140502E6C (sub_140502E6C.c)
 *     sub_14050DC38 @ 0x14050DC38 (sub_14050DC38.c)
 *     sub_14050E930 @ 0x14050E930 (sub_14050E930.c)
 *     sub_14050F964 @ 0x14050F964 (sub_14050F964.c)
 *     sub_140822E6C @ 0x140822E6C (sub_140822E6C.c)
 *     sub_140822FF8 @ 0x140822FF8 (sub_140822FF8.c)
 *     sub_1408247DC @ 0x1408247DC (sub_1408247DC.c)
 */

__int64 __fastcall sub_1403BB0A0(int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rcx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v13; // rcx
  unsigned int MaximumProcessorCount; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  unsigned __int8 v25; // cl
  const EVENT_DESCRIPTOR *v26; // rcx
  LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a1 - 1;
  if ( !v4 )
  {
    v3 = sub_1403BBDD4(a3);
    off_140C01D88[0] = (__int64 (__fastcall *)())sub_140229A50;
    return v3;
  }
  v5 = v4 - 7;
  if ( !v5 )
  {
    v25 = byte_140C4C08C;
    if ( !byte_140C4C08C )
      v25 = 50;
    dword_140C4BCA0 = v25;
    return v3;
  }
  v6 = v5 - 6;
  if ( !v6 )
  {
    if ( (unsigned int)sub_14036FA84() == 1 )
      off_140C01D00[0] = sub_1403DD730;
    off_140C01EC8[0] = (__int64 (__fastcall *)())sub_1403AE810;
    off_140C01ED0[0] = sub_140257FB0;
    off_140C01ED8[0] = sub_140256380;
    off_140C01EE0[0] = (__int64 (__fastcall *)())sub_140354380;
    off_140C01EC0[0] = sub_1403DD420;
    off_140C01EE8[0] = (__int64 (__fastcall *)())sub_1402364B0;
    off_140C01E40 = sub_1403DDFB0;
    off_140C02050 = (__int64 (__fastcall *)())sub_1403727F0;
    off_140C01F78[0] = sub_1405030B0;
    off_140C01F70[0] = sub_1405031C0;
    off_140C01F80[0] = sub_1405032F0;
    sub_1403BBAC8(v18);
    ((void (*)(void))sub_1403BB3F0)();
    sub_1403BAF00(v20, v19, v21, v22);
    byte_140D0501B = 15;
    v23 = sub_1403BB340();
    v3 = v23;
    if ( v23 < 0 )
      KeBugCheckEx(0x5Cu, 0x110uLL, v23, 0LL, 0LL);
    sub_1403B54DC(qword_140C4E390, v24);
    return v3;
  }
  v7 = v6 - 3;
  if ( v7 )
  {
    v8 = (unsigned int)(v7 - 2);
    if ( !(_DWORD)v8 )
    {
      if ( !qword_140C4C488 )
      {
        v8 = 16LL;
        __writemsr(0x10u, 0LL);
      }
      sub_1403BB3F0(v8);
      sub_1403BB5A0();
      sub_1403BB500();
      return (unsigned int)sub_1403BB340();
    }
    v9 = v8 - 2;
    if ( v9 )
    {
      v10 = v9 - 4;
      if ( v10 )
      {
        v11 = v10 - 4;
        if ( v11 )
        {
          if ( v11 == 3 )
          {
            off_140C01F98[0] = (__int64 (__fastcall *)())sub_1403985E0;
            sub_140822E6C();
            sub_140822FF8();
          }
        }
        else
        {
          v3 = sub_1403B9904();
          sub_1408247DC();
        }
      }
      else if ( qword_140C4E3E8 )
      {
        sub_14050E930();
      }
      return v3;
    }
    sub_1403BA9B4();
    sub_1403BAA84();
    off_140C02030[0] = sub_140503320;
    if ( (unsigned int)sub_14036FA84() == 1 )
    {
      if ( !byte_140C4E4D8 && *(_DWORD *)(qword_140C4E390 + 228) != 5 )
        sub_14050F964();
      if ( *(_DWORD *)(qword_140C4E390 + 228) == 5 )
      {
        if ( byte_140C4C748 )
        {
          v26 = (const EVENT_DESCRIPTOR *)qword_140038DA0;
        }
        else
        {
          if ( !byte_140C4C768 )
            goto LABEL_25;
          v26 = &stru_140039420;
        }
        sub_14050DC38(v26);
      }
    }
LABEL_25:
    PerformanceFrequency.QuadPart = 0LL;
    v13 = qword_140C4E4F0;
    if ( qword_140C4E4F0 )
    {
      if ( byte_140C4E4A8 )
      {
        if ( (*(_DWORD *)(qword_140C4E4F0 + 224) & 0x6000) != 0 )
        {
          v13 = 0LL;
          qword_140C4E4F0 = 0LL;
        }
        if ( v13 )
        {
          if ( !qword_140C4E3E0 )
          {
            KeQueryPerformanceCounter(&PerformanceFrequency);
            qword_140C4E3E0 = PerformanceFrequency.QuadPart;
          }
          qword_140C4E3F0 = KeQueryPerformanceCounter(0LL).QuadPart;
          sub_140502E6C();
        }
      }
      else
      {
        qword_140C4E4F0 = 0LL;
      }
    }
    return v3;
  }
  sub_1403BAB70();
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  qword_140C4E400 = sub_1403B1F04(v15, 8LL * MaximumProcessorCount);
  if ( qword_140C4E400 )
  {
    if ( (unsigned int)sub_14036FA84() == 1 )
      sub_1403BACF8(v17, v16);
    return v3;
  }
  return 3221225626LL;
}
