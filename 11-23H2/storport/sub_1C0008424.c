/*
 * XREFs of sub_1C0008424 @ 0x1C0008424
 * Callers:
 *     sub_1C0007D58 @ 0x1C0007D58 (sub_1C0007D58.c)
 *     sub_1C0010614 @ 0x1C0010614 (sub_1C0010614.c)
 *     sub_1C0013934 @ 0x1C0013934 (sub_1C0013934.c)
 *     sub_1C00196D4 @ 0x1C00196D4 (sub_1C00196D4.c)
 *     sub_1C001A4C0 @ 0x1C001A4C0 (sub_1C001A4C0.c)
 *     sub_1C001F308 @ 0x1C001F308 (sub_1C001F308.c)
 *     sub_1C0034684 @ 0x1C0034684 (sub_1C0034684.c)
 *     sub_1C0038AB8 @ 0x1C0038AB8 (sub_1C0038AB8.c)
 *     sub_1C0038FB0 @ 0x1C0038FB0 (sub_1C0038FB0.c)
 *     StorPortGetUncachedExtension @ 0x1C00465B0 (StorPortGetUncachedExtension.c)
 *     sub_1C00557CC @ 0x1C00557CC (sub_1C00557CC.c)
 *     sub_1C0063710 @ 0x1C0063710 (sub_1C0063710.c)
 *     sub_1C0074CA8 @ 0x1C0074CA8 (sub_1C0074CA8.c)
 *     sub_1C00A21E0 @ 0x1C00A21E0 (sub_1C00A21E0.c)
 *     sub_1C00A3D2C @ 0x1C00A3D2C (sub_1C00A3D2C.c)
 *     sub_1C00A6E08 @ 0x1C00A6E08 (sub_1C00A6E08.c)
 *     sub_1C00A7664 @ 0x1C00A7664 (sub_1C00A7664.c)
 *     sub_1C00A7954 @ 0x1C00A7954 (sub_1C00A7954.c)
 *     sub_1C00ACAB4 @ 0x1C00ACAB4 (sub_1C00ACAB4.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C0008424(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 ContiguousNodeMemory; // rax
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  v15 = 0LL;
  v3 = a1 + 24;
  v4 = *(_QWORD *)(a3 + 4248);
  v6 = *(_QWORD *)(a3 + 760);
  v7 = *(_QWORD *)(a3 + 4256);
  v14[0] = v4;
  v8 = *(_QWORD *)(a3 + 4240);
  if ( !*(_QWORD *)(a3 + 5544) )
    v3 = a1;
  v16 = v7;
  if ( *(_BYTE *)(a3 + 768) && *(_DWORD *)(a3 + 788) == 3 )
  {
    v9 = v3;
    ContiguousNodeMemory = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, _QWORD, _DWORD, _QWORD, unsigned int, __int64 *))(*(_QWORD *)(v6 + 8) + 272LL))(
                             v6,
                             v14,
                             &v16,
                             v3,
                             0,
                             0LL,
                             0x80000000,
                             &v15);
  }
  else
  {
    v9 = v3;
    ContiguousNodeMemory = MmAllocateContiguousNodeMemory(v3, v4, v7, v8, 4, 0x80000000);
  }
  v11 = ContiguousNodeMemory;
  if ( ContiguousNodeMemory )
  {
    if ( *(_QWORD *)(a3 + 5544) )
    {
      v13 = v9 + ContiguousNodeMemory - 24;
      *(_QWORD *)(v11 + 832) = v13;
      *(_OWORD *)v13 = 0LL;
      *(_QWORD *)(v13 + 16) = 0LL;
    }
    else
    {
      *(_QWORD *)(ContiguousNodeMemory + 832) = 0LL;
    }
    *(_QWORD *)(v11 + 24) = v15;
    *(_DWORD *)(v11 + 16) = v3;
  }
  return v11;
}
