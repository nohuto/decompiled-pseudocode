/*
 * XREFs of sub_14069BBC0 @ 0x14069BBC0
 * Callers:
 *     sub_1402D6A98 @ 0x1402D6A98 (sub_1402D6A98.c)
 *     sub_14069BBC0 @ 0x14069BBC0 (sub_14069BBC0.c)
 *     sub_1406FE720 @ 0x1406FE720 (sub_1406FE720.c)
 * Callees:
 *     sub_1402235F4 @ 0x1402235F4 (sub_1402235F4.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14069BBC0 @ 0x14069BBC0 (sub_14069BBC0.c)
 *     sub_14069BF4C @ 0x14069BF4C (sub_14069BF4C.c)
 *     sub_14069BFB8 @ 0x14069BFB8 (sub_14069BFB8.c)
 *     sub_14069BFDC @ 0x14069BFDC (sub_14069BFDC.c)
 *     sub_14069C9C0 @ 0x14069C9C0 (sub_14069C9C0.c)
 *     sub_14069CEC8 @ 0x14069CEC8 (sub_14069CEC8.c)
 *     sub_14069D1D8 @ 0x14069D1D8 (sub_14069D1D8.c)
 *     sub_1409CCB9C @ 0x1409CCB9C (sub_1409CCB9C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14069BBC0(_DWORD *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 **v5; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v7; // rsi
  __int64 *i; // rbx
  __int64 v9; // rax
  void *v10; // rcx
  void *v11; // rsi
  void *v12; // rcx

  v4 = (unsigned int)(1529154084 * *a1) >> 28;
  v5 = (__int64 **)(qword_140D3CA78 + 8 * v4);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v7 = &stru_140CF66C0 + (v4 & 3);
  ExAcquireResourceExclusiveLite(v7, 1u);
  for ( i = *v5; ; i = (__int64 *)*i )
  {
    if ( !i )
    {
      ExReleaseResourceLite(v7);
      KeLeaveCriticalRegion();
      KeBugCheckEx(0x46u, 0LL, 0LL, 0LL, 0LL);
    }
    if ( i[20] == a2 && *a1 == *((_DWORD *)i + 2) && a1[1] == *((_DWORD *)i + 3) )
      break;
    v5 = (__int64 **)i;
  }
  v9 = _InterlockedDecrement64(i + 3);
  if ( v9 > 0 )
  {
    ExReleaseResourceLite(v7);
    KeLeaveCriticalRegion();
  }
  else
  {
    if ( v9 )
      __fastfail(0xEu);
    *v5 = (__int64 *)*i;
    ExReleaseResourceLite(v7);
    KeLeaveCriticalRegion();
    if ( (i[4] & 4) != 0 && (*((_DWORD *)i + 4) || *((_DWORD *)i + 5)) )
      sub_14069BBC0(i + 2, i[20]);
    v10 = (void *)i[6];
    if ( v10 )
    {
      ObfDereferenceObject(v10);
      i[6] = 0LL;
    }
    v11 = (void *)i[5];
    if ( v11 )
    {
      i[5] = 0LL;
      sub_14069CEC8(a1, a2);
      sub_14069C9C0(v11);
    }
    if ( (i[4] & 1) != 0 )
      sub_14069D1D8(a1, a2);
    v12 = (void *)i[8];
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    sub_14069BFB8(i);
    if ( byte_140C5AEB0 )
      sub_1409CCB9C(i);
    sub_14069BF4C(i + 16);
    sub_14069BFDC(a1, i[20], i);
    sub_1402235F4();
  }
}
