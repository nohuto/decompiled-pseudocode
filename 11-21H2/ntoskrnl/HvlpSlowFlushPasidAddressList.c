/*
 * XREFs of HvlpSlowFlushPasidAddressList @ 0x14054961C
 * Callers:
 *     HvlSvmFlushPasid @ 0x140548BF0 (HvlSvmFlushPasid.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 *     HvlpFlushPasidAddressSpace @ 0x140549510 (HvlpFlushPasidAddressSpace.c)
 */

char __fastcall HvlpSlowFlushPasidAddressList(int a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v8; // rax
  __int64 *v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int128 v13; // [rsp+28h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+40h] [rbp-18h]

  v4 = a3;
  v13 = 0LL;
  v14 = 0LL;
  LODWORD(v15) = 0;
  v8 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v13, 5, 0LL, 0LL);
  if ( !v8 )
    return HvlpFlushPasidAddressSpace(a1, a2);
  v8[1] = 0LL;
  v10 = v8 + 2;
  *((_DWORD *)v8 + 1) = a1;
  *(_DWORD *)v8 = a2;
  if ( (_DWORD)v4 )
  {
    v11 = a4 - (_QWORD)v10;
    v12 = v4;
    do
    {
      *v10 = *(__int64 *)((char *)v10 + v11) & 0x800 | (*(__int64 *)((char *)v10 + v11)
                                                      + (*(__int64 *)((char *)v10 + v11) & 0xC00));
      ++v10;
      --v12;
    }
    while ( v12 );
  }
  HvcallInitiateHypercall(161);
  return HvlpReleaseHypercallPage((__int64)&v13);
}
