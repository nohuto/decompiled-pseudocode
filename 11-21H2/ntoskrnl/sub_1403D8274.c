/*
 * XREFs of sub_1403D8274 @ 0x1403D8274
 * Callers:
 *     sub_140502630 @ 0x140502630 (sub_140502630.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     sub_1403D82CC @ 0x1403D82CC (sub_1403D82CC.c)
 *     InbvIsBootDriverInstalled @ 0x1403D8370 (InbvIsBootDriverInstalled.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140550B6C @ 0x140550B6C (sub_140550B6C.c)
 *     sub_140550C30 @ 0x140550C30 (sub_140550C30.c)
 *     sub_140550C9C @ 0x140550C9C (sub_140550C9C.c)
 *     InbvSetTextColor @ 0x140550D30 (InbvSetTextColor.c)
 *     InbvSolidColorFill @ 0x140550D60 (InbvSolidColorFill.c)
 *     sub_140550EE0 @ 0x140550EE0 (sub_140550EE0.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 */

int __fastcall sub_1403D8274(char a1)
{
  int v1; // ebx
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  HANDLE ThreadHandle; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  if ( byte_140D014B0 )
  {
    ((void (*)(void))sub_140550B6C)();
    dword_140D01868 = 0;
    sub_140550C9C();
  }
  byte_140C097BE = 0;
  if ( a1 )
  {
    InbvSetTextColor(15LL);
    InbvSolidColorFill(0, 0, 639, 479, 0);
    InbvSolidColorFill(0, 421, 639, 479, 0);
    v4 = sub_140550C30(6LL);
    v3 = sub_140550C30(7LL);
    v5 = qword_140C54D10;
    v1 = 0;
    v6 = v3;
    if ( qword_140C54D10 )
    {
      v3 = *(_QWORD *)(qword_140C54D10 + 72);
      if ( v3 )
      {
        LODWORD(v3) = sub_14042A5E0(32LL, 80LL);
        v5 = qword_140C54D10;
      }
    }
    if ( v6 )
    {
      if ( v5 )
      {
        v3 = *(_QWORD *)(v5 + 96);
        if ( v3 )
        {
          LODWORD(v3) = sub_14042A5E0(v6, 0LL);
          v5 = qword_140C54D10;
        }
      }
    }
    if ( v4 )
    {
      if ( v5 )
      {
        v3 = *(_QWORD *)(v5 + 96);
        if ( v3 )
          LODWORD(v3) = sub_14042A5E0(v4, 0LL);
      }
    }
LABEL_29:
    if ( !byte_140D014B0 )
      return v3;
    goto LABEL_30;
  }
  if ( !(unsigned __int8)InbvIsBootDriverInstalled() )
  {
    LODWORD(v3) = sub_1403D82CC();
    return v3;
  }
  qword_140C54D18 = (__int64)sub_140502630;
  v7 = sub_140550C30(1LL);
  v8 = sub_140550C30(4LL);
  v5 = qword_140C54D10;
  v9 = v8;
  if ( v7 )
  {
    v1 = 1;
    if ( qword_140C54D10 )
    {
      if ( *(_QWORD *)(qword_140C54D10 + 96) )
      {
        sub_14042A5E0(v7, 0LL);
        v5 = qword_140C54D10;
      }
    }
  }
  if ( v9 && v5 && *(_QWORD *)(v5 + 96) )
    sub_14042A5E0(v9, 0LL);
  if ( !byte_140D014B0 )
  {
    ThreadHandle = 0LL;
    LODWORD(v3) = PsCreateSystemThread(&ThreadHandle, 0, 0LL, 0LL, 0LL, sub_140550E80, 0LL);
    if ( (int)v3 >= 0 )
    {
      LODWORD(v3) = ZwClose(ThreadHandle);
      byte_140D014B0 = 1;
    }
    goto LABEL_29;
  }
LABEL_30:
  sub_140550B6C(v5);
  dword_140D01868 = v1;
  if ( v1 == 1 )
    sub_140550EE0();
  LODWORD(v3) = sub_140550C9C();
  return v3;
}
