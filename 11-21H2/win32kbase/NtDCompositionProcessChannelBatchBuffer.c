/*
 * XREFs of NtDCompositionProcessChannelBatchBuffer @ 0x1C0089F20
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C008A134 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionProcessChannelBatchBuffer(__int64 a1, __int64 a2, unsigned int *a3, bool *a4)
{
  int v4; // edi
  __int64 v5; // r14
  unsigned int v6; // r13d
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v11; // rbx
  struct _RTL_GENERIC_TABLE *v12; // rcx
  _QWORD *v13; // rax
  signed int v14; // edi
  struct _ERESOURCE *v15; // rbx
  unsigned int v16; // eax
  int v17; // ebx
  bool v18; // r8
  unsigned int v20; // [rsp+34h] [rbp-54h] BYREF
  signed int v21; // [rsp+38h] [rbp-50h]
  int Buffer; // [rsp+40h] [rbp-48h] BYREF
  __int64 v23; // [rsp+44h] [rbp-44h]
  int v24; // [rsp+4Ch] [rbp-3Ch]
  unsigned int v25; // [rsp+98h] [rbp+10h]

  v25 = a2;
  v4 = a1;
  v5 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3, a4);
  if ( CurrentProcessWin32Process )
    v9 = *(_QWORD *)(CurrentProcessWin32Process + 256);
  if ( v9 )
  {
    v11 = *(struct _ERESOURCE **)(v9 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v11, 1u);
    v12 = *(struct _RTL_GENERIC_TABLE **)v9;
    Buffer = v4;
    v23 = 0LL;
    v24 = 0;
    v13 = RtlLookupElementGenericTable(v12, &Buffer);
    if ( v13 )
      v8 = v13[1];
    v14 = v8 == 0 ? 0xC0000022 : 0;
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    ExReleaseResourceLite(*(PERESOURCE *)(v9 + 8));
    KeLeaveCriticalRegion();
  }
  else
  {
    v14 = -1073741823;
  }
  if ( v8 )
  {
    v15 = *(struct _ERESOURCE **)(v8 + 32);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v15, 1u);
    v7 = v8;
  }
  if ( v14 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7) == 1 )
    {
      v5 = v7;
    }
    else
    {
      v14 = -1073741811;
      (**(void (__fastcall ***)(__int64))v7)(v7);
    }
  }
  v21 = v14;
  if ( v14 < 0 )
  {
    v18 = 0;
  }
  else
  {
    v20 = 0;
    v16 = *(_DWORD *)(v5 + 1736);
    v14 = v16 < v25 ? 0xC000000D : 0;
    if ( v25 <= v16 )
    {
      v14 = DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
              (DirectComposition::CApplicationChannel *)v5,
              *(void **)(v5 + 1744),
              v25,
              1,
              &v20);
      v6 = v20;
    }
    v17 = *(_DWORD *)(v5 + 516);
    v21 = v14;
    (**(void (__fastcall ***)(__int64))v5)(v5);
    v18 = v17 != 0;
  }
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v6;
  if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a4 = v18;
  return (unsigned int)v14;
}
