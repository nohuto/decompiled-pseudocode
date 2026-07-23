/*
 * XREFs of sub_1406BE9A0 @ 0x1406BE9A0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140642840 @ 0x140642840 (sub_140642840.c)
 *     sub_140642868 @ 0x140642868 (sub_140642868.c)
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_14085F65C @ 0x14085F65C (sub_14085F65C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406BE9A0(int a1, _DWORD *a2, volatile void *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  char v9; // bl
  NTSTATUS SystemThread; // esi
  int v12; // eax
  unsigned int Length; // [rsp+50h] [rbp-A8h]
  __int128 v14; // [rsp+58h] [rbp-A0h] BYREF
  __int128 v15; // [rsp+68h] [rbp-90h]
  __int128 v16; // [rsp+78h] [rbp-80h]
  HANDLE Handle; // [rsp+88h] [rbp-70h] BYREF
  struct _KEVENT Event; // [rsp+90h] [rbp-68h] BYREF
  int v19; // [rsp+A8h] [rbp-50h]
  int v20; // [rsp+ACh] [rbp-4Ch]
  __int64 v21; // [rsp+B0h] [rbp-48h]
  __int64 v22; // [rsp+B8h] [rbp-40h]
  int v23; // [rsp+C0h] [rbp-38h]
  int v24; // [rsp+C4h] [rbp-34h]
  __int128 v25; // [rsp+C8h] [rbp-30h]
  char v26; // [rsp+118h] [rbp+20h]

  v20 = 0;
  v24 = 0;
  memset(&Event, 0, sizeof(Event));
  Handle = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v26 = 0;
  if ( !*((_BYTE *)KeGetCurrentThread() + 562) || (_DWORD)InitSafeBootMode )
    goto LABEL_46;
  if ( !a2 )
  {
    if ( (a1 & 0xA) == 0 )
      goto LABEL_47;
    Length = 0;
    v5 = 0x7FFFFFFF0000LL;
    goto LABEL_11;
  }
  v5 = 0x7FFFFFFF0000LL;
  v6 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
    v6 = (__int64)a2;
  Length = *(_DWORD *)v6;
  if ( !*(_DWORD *)v6 )
  {
LABEL_11:
    if ( a3 )
      goto LABEL_47;
    goto LABEL_12;
  }
  if ( !a3 )
    goto LABEL_47;
LABEL_12:
  v7 = 1;
  if ( a1 )
    v7 = a1;
  if ( (v7 & 0xFFFFFFF4) != 0 )
    goto LABEL_47;
  if ( !qword_140CE21B8 )
  {
    SystemThread = sub_14085F65C(&qword_140CE21B8);
    if ( (SystemThread & 0xC0000000) == 0xC0000000 )
      goto LABEL_27;
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(qword_140CE21B8, 1u);
  v26 = 1;
  if ( qword_140C4EF68 == (PVOID)-1LL )
  {
    if ( (v7 & 2) != 0 )
    {
      qword_140C4EF68 = 0LL;
      LODWORD(dword_140C4EF60) = 0;
LABEL_45:
      SystemThread = 0;
      goto LABEL_27;
    }
LABEL_46:
    SystemThread = -1073741823;
    goto LABEL_27;
  }
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 2) != 0 )
    {
      if ( qword_140C4EF68 )
      {
        ExFreePoolWithTag(qword_140C4EF68, 0);
        qword_140C4EF68 = 0LL;
        LODWORD(dword_140C4EF60) = 0;
        if ( (v7 & 8) != 0 )
          ++MEMORY[0xFFFFF780000003A4];
      }
      goto LABEL_45;
    }
    if ( (v7 & 8) != 0 )
    {
      v12 = ++MEMORY[0xFFFFF780000003A4];
      if ( qword_140C4EF68 )
        *((_DWORD *)qword_140C4EF68 + 3) = v12;
      goto LABEL_45;
    }
LABEL_47:
    SystemThread = -1073741811;
    goto LABEL_27;
  }
  v9 = 0;
  if ( qword_140C4EF68 )
    goto LABEL_19;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  *(_QWORD *)&v14 = &Event;
  *((_QWORD *)&v14 + 1) = 0LL;
  *(_QWORD *)&v15 = 0LL;
  *((_QWORD *)&v15 + 1) = (unsigned __int16)word_140D3CA00;
  *(_QWORD *)&v16 = (unsigned __int16)word_140D3CA04;
  DWORD2(v16) = -1073741823;
  v19 = 48;
  v21 = 0LL;
  v23 = 512;
  v22 = 0LL;
  v25 = 0LL;
  SystemThread = PsCreateSystemThreadEx((unsigned int)&Handle, 0LL, (__int64)sub_14082FB00, (__int64)&v14, 0LL, 0LL);
  if ( SystemThread >= 0 )
  {
    ZwClose(Handle);
    SystemThread = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( SystemThread >= 0 )
    {
      SystemThread = DWORD2(v16);
      if ( SDWORD2(v16) < 0 )
      {
LABEL_54:
        qword_140C4EF68 = (PVOID)-1LL;
        LODWORD(dword_140C4EF60) = 0;
        goto LABEL_27;
      }
      qword_140C4EF68 = (PVOID)*((_QWORD *)&v14 + 1);
      LODWORD(dword_140C4EF60) = v15;
      if ( !DWORD1(v15) )
        sub_140642840(32770);
      if ( !HIDWORD(v15) )
      {
        if ( PsUILanguageComitted )
          sub_140642840(32769);
        sub_140642868();
      }
      if ( !DWORD1(v16) )
        word_140D3CA04 = word_140D3CA00;
    }
  }
  if ( SystemThread < 0 )
    goto LABEL_54;
LABEL_19:
  if ( Length )
  {
    if ( Length < (unsigned int)dword_140C4EF60 )
    {
      SystemThread = -1073741789;
      goto LABEL_23;
    }
    v9 = 1;
  }
  SystemThread = 0;
LABEL_23:
  if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
    v5 = (__int64)a2;
  *(_DWORD *)v5 = *(_DWORD *)v5;
  *a2 = dword_140C4EF60;
  if ( v9 )
  {
    ProbeForWrite(a3, Length, 1u);
    memset((void *)a3, 0, Length);
    memmove((void *)a3, qword_140C4EF68, (unsigned int)dword_140C4EF60);
  }
LABEL_27:
  if ( v26 )
  {
    ExReleaseResourceLite(qword_140CE21B8);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  return (unsigned int)SystemThread;
}
