/*
 * XREFs of sub_14076A0A8 @ 0x14076A0A8
 * Callers:
 *     sub_140768E44 @ 0x140768E44 (sub_140768E44.c)
 *     sub_140769170 @ 0x140769170 (sub_140769170.c)
 *     sub_140769C24 @ 0x140769C24 (sub_140769C24.c)
 *     sub_140778830 @ 0x140778830 (sub_140778830.c)
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 *     sub_14083F090 @ 0x14083F090 (sub_14083F090.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     sub_14077B12C @ 0x14077B12C (sub_14077B12C.c)
 *     sub_14077B33C @ 0x14077B33C (sub_14077B33C.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 */

__int64 __fastcall sub_14076A0A8(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v6; // rax
  PVOID Buffer; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v4 = sub_14077B33C(a1);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite((PERESOURCE)v4, 1u);
  v6 = (_DWORD *)sub_14077B12C(v4, a2);
  Buffer = v6;
  if ( v6 )
  {
    --v6[3];
    if ( !*((_DWORD *)Buffer + 3) )
    {
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v4 + 104), &Buffer);
      sub_14077B394(Buffer);
    }
  }
  else
  {
    v3 = -1073741772;
  }
  ExReleaseResourceLite((PERESOURCE)v4);
  KeLeaveCriticalRegion();
  return v3;
}
