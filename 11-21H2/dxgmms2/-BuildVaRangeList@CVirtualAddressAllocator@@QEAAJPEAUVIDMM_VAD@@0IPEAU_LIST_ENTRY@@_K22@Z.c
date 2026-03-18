/*
 * XREFs of ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x1C00E2224
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00DACE0 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0002C40 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::BuildVaRangeList(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        struct VIDMM_VAD *a3,
        unsigned int a4,
        struct _LIST_ENTRY *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  __int64 v9; // rdi
  __int64 v10; // rcx
  char *v11; // rdi
  unsigned int v12; // ebp
  char *i; // r13
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r14
  __int64 v16; // r10
  __int64 v17; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v19; // rax
  _BYTE v21[8]; // [rsp+60h] [rbp-48h] BYREF
  DXGPUSHLOCK *v22; // [rsp+68h] [rbp-40h]
  int v23; // [rsp+70h] [rbp-38h]
  char v25; // [rsp+C8h] [rbp+20h]
  unsigned __int64 v26; // [rsp+E8h] [rbp+40h]

  v25 = a4;
  v9 = a4;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, this + 7, 0);
  DXGPUSHLOCK::AcquireExclusive(v22);
  v26 = a8 - a6;
  v10 = (unsigned int)v9;
  v11 = (char *)*((_QWORD *)a2 + 3 * v9 + 12);
  v12 = 0;
  v23 = 2;
  for ( i = (char *)a2 + 24 * v10 + 96; v11 != i; v11 = *(char **)v11 )
  {
    v14 = *((_QWORD *)v11 + 11);
    if ( a7 <= v14 )
      break;
    v15 = *((_QWORD *)v11 + 12);
    if ( a6 < v15 )
    {
      if ( a6 > v14 )
        v14 = a6;
      if ( a7 < v15 )
        v15 = a7;
      v16 = operator new(136LL, 0x39346956u, 256LL);
      if ( !v16
        || (v17 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                    v16,
                    (__int64)a3,
                    v14 + v26,
                    v15 + v26,
                    v25,
                    *((_QWORD *)v11 + 6),
                    v14 + *((_QWORD *)v11 + 8) - *((_QWORD *)v11 + 11),
                    (int)(*((_DWORD *)v11 + 14) << 28) >> 28,
                    *((_QWORD *)v11 + 10),
                    *((_QWORD *)v11 + 9),
                    *((_QWORD *)v11 + 14),
                    *((_QWORD *)v11 + 13))) == 0 )
      {
        v12 = -1073741801;
        break;
      }
      Blink = a5->Blink;
      v19 = (struct _LIST_ENTRY *)(v17 + 8);
      if ( Blink->Flink != a5 )
        __fastfail(3u);
      v19->Flink = a5;
      v19->Blink = Blink;
      Blink->Flink = v19;
      a5->Blink = v19;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  return v12;
}
