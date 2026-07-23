/*
 * XREFs of sub_140944ADC @ 0x140944ADC
 * Callers:
 *     sub_14070A064 @ 0x14070A064 (sub_14070A064.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402DF7B0 (PsGetServerSiloServiceSessionId.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140749588 @ 0x140749588 (sub_140749588.c)
 *     sub_14078D3DC @ 0x14078D3DC (sub_14078D3DC.c)
 */

char __fastcall sub_140944ADC(__int64 a1, __int64 a2, int *a3, _DWORD *a4)
{
  int v8; // edi
  __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rcx
  int v11; // eax

  v8 = -1;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( *(_DWORD *)(a1 + 20) != (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
    v8 = sub_140749588(*(struct _DEVICE_OBJECT **)(a1 + 88));
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 72), 1u);
  if ( (v8 == -1 || *(_DWORD *)(a1 + 20) == v8) && !*(_BYTE *)(a1 + 58) )
  {
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 80);
    v11 = sub_14078D3DC(a1, a2, a4);
  }
  else
  {
    *a4 = -1073741637;
    v11 = -1073741808;
  }
  *a3 = v11;
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 72));
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
