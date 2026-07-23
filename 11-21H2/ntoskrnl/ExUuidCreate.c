/*
 * XREFs of ExUuidCreate @ 0x140681B30
 * Callers:
 *     sub_1405D89F0 @ 0x1405D89F0 (sub_1405D89F0.c)
 *     sub_140609B70 @ 0x140609B70 (sub_140609B70.c)
 *     sub_140681CB0 @ 0x140681CB0 (sub_140681CB0.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 *     sub_1407435A8 @ 0x1407435A8 (sub_1407435A8.c)
 *     sub_1407452A0 @ 0x1407452A0 (sub_1407452A0.c)
 *     sub_14091DBC4 @ 0x14091DBC4 (sub_14091DBC4.c)
 *     sub_140930370 @ 0x140930370 (sub_140930370.c)
 *     IoGetDeviceDirectory @ 0x140943540 (IoGetDeviceDirectory.c)
 *     sub_14094E390 @ 0x14094E390 (sub_14094E390.c)
 *     sub_140A1CF34 @ 0x140A1CF34 (sub_140A1CF34.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406DC574 @ 0x1406DC574 (sub_1406DC574.c)
 *     sub_14080EE74 @ 0x14080EE74 (sub_14080EE74.c)
 */

NTSTATUS __stdcall ExUuidCreate(UUID *Uuid)
{
  struct _KTHREAD *CurrentThread; // r14
  NTSTATUS v2; // ebp
  __int64 v4; // rdi
  char v5; // cl
  int v6; // eax
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // r15

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  while ( 1 )
  {
    do
    {
      v4 = qword_140D3B260;
      v5 = byte_140D3B019;
      *(_DWORD *)Uuid->Data4 = dword_140D3B26C;
      *(_DWORD *)&Uuid->Data4[4] = dword_140D3B270;
      v6 = _InterlockedDecrement(&dword_140D3B268);
    }
    while ( v4 != qword_140D3B260 );
    if ( v6 >= 0 )
    {
      v7 = v4 - v6;
      Uuid->Data1 = v7;
      Uuid->Data2 = WORD2(v7);
      Uuid->Data3 = HIWORD(v7) & 0xFFF | 0x1000;
      if ( !v5 )
        return 1073872982;
      return v2;
    }
    --*((_WORD *)CurrentThread + 242);
    v9 = sub_140347C10((__int64)&qword_140CF6898, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140CF6898, 0LL) )
      sub_14029F120(&qword_140CF6898, v9, (__int64)&qword_140CF6898);
    if ( v10 )
      *(_BYTE *)(v10 + 18) = 1;
    if ( v4 != qword_140D3B260 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140CF6898, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
        goto LABEL_14;
      goto LABEL_16;
    }
    v2 = sub_14080EE74(&qword_140D3B260);
    if ( v2 )
      break;
    sub_1406DC574();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140CF6898, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
      goto LABEL_14;
LABEL_16:
    ExfTryToWakePushLock(&qword_140CF6898);
LABEL_14:
    sub_1402AFC00((ULONG_PTR)&qword_140CF6898);
    sub_1402AC800((__int64)CurrentThread);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140CF6898, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140CF6898);
  sub_1402AFC00((ULONG_PTR)&qword_140CF6898);
  sub_1402AC800((__int64)CurrentThread);
  return v2;
}
