/*
 * XREFs of sub_14078B7C4 @ 0x14078B7C4
 * Callers:
 *     sub_14076550C @ 0x14076550C (sub_14076550C.c)
 *     sub_14078AC7C @ 0x14078AC7C (sub_14078AC7C.c)
 *     sub_14095E650 @ 0x14095E650 (sub_14095E650.c)
 *     sub_14095E9F0 @ 0x14095E9F0 (sub_14095E9F0.c)
 * Callees:
 *     KeAcquireGuardedMutex @ 0x14029ECC0 (KeAcquireGuardedMutex.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402DF7B0 (PsGetServerSiloServiceSessionId.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_140749588 @ 0x140749588 (sub_140749588.c)
 *     sub_14078D340 @ 0x14078D340 (sub_14078D340.c)
 *     sub_14078D3DC @ 0x14078D3DC (sub_14078D3DC.c)
 */

__int64 __fastcall sub_14078B7C4(__int64 *Source1, struct _DEVICE_OBJECT *Object, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // esi
  _QWORD *DeviceNode; // rbx
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx
  __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rax
  _OWORD *v14; // rdx
  int v15; // ebx
  int v16; // eax
  __int128 v17; // xmm0
  void *v18; // r15
  int v19; // ebx
  void *v20; // r12
  __int64 v21; // rax
  struct _KTHREAD *v22; // rax
  char v23; // [rsp+20h] [rbp-58h]
  int v24; // [rsp+24h] [rbp-54h] BYREF
  int v25; // [rsp+28h] [rbp-50h]
  _QWORD *v26; // [rsp+30h] [rbp-48h]
  PVOID P; // [rsp+38h] [rbp-40h]
  _QWORD *v28; // [rsp+40h] [rbp-38h]
  _OWORD v29[2]; // [rsp+48h] [rbp-30h] BYREF

  v28 = a4;
  v6 = 0;
  v24 = 0;
  v25 = -1;
  memset(v29, 0, sizeof(v29));
  ObfReferenceObjectWithTag(Object, 0x4E706E50u);
  DeviceNode = Object->DeviceObjectExtension->DeviceNode;
  if ( a3 )
  {
    *(_WORD *)a3 = 1;
  }
  else
  {
    v17 = *(_OWORD *)Source1;
    LODWORD(v29[0]) = 2097153;
    *(_OWORD *)((char *)v29 + 4) = v17;
  }
  KeAcquireGuardedMutex(&stru_140C469C0);
  if ( Source1 == (__int64 *)&xmmword_140010CC8 || RtlCompareMemory(Source1, &xmmword_140010CC8, 0x10uLL) == 16 )
  {
    v9 = (_QWORD *)DeviceNode[60];
    v23 = 1;
  }
  else
  {
    v9 = (_QWORD *)DeviceNode[59];
    v23 = 0;
  }
  v10 = DeviceNode + 59;
  v26 = v10;
  while ( v9 != v10 )
  {
    P = v9;
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( *((_DWORD *)v9 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
      v25 = sub_140749588(Object);
    ++*((_WORD *)v9 + 28);
    KeReleaseGuardedMutex(&stru_140C469C0);
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceExclusiveLite((PERESOURCE)v9[9], 1u);
    if ( (v25 == -1 || *((_DWORD *)v9 + 5) == v25) && !*((_BYTE *)v9 + 58) )
    {
      if ( a3 )
      {
        *(_QWORD *)(a3 + 24) = v9[10];
        v14 = (_OWORD *)a3;
      }
      else
      {
        *((_QWORD *)&v29[1] + 1) = v9[10];
        v14 = v29;
      }
      v15 = sub_14078D3DC(v9, v14, &v24);
      ExReleaseResourceLite((PERESOURCE)v9[9]);
      KeLeaveCriticalRegion();
      v16 = v24;
      if ( v15 < 0 )
        v16 = 0;
      v24 = v16;
      if ( v16 < 0 && (Source1 == &qword_140010CE8 || RtlCompareMemory(Source1, &qword_140010CE8, 0x10uLL) == 16) )
      {
        if ( v28 )
          *v28 = v9[6];
        v18 = v9;
        *(_OWORD *)((char *)v29 + 4) = xmmword_140010CC8;
        KeAcquireGuardedMutex(&stru_140C469C0);
        do
        {
          v19 = -1;
          v20 = v9;
          v21 = PsGetCurrentServerSilo();
          if ( *((_DWORD *)v9 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(v21) )
            v19 = sub_140749588(Object);
          ++*((_WORD *)v9 + 28);
          KeReleaseGuardedMutex(&stru_140C469C0);
          v22 = KeGetCurrentThread();
          --*((_WORD *)v22 + 242);
          ExAcquireResourceExclusiveLite((PERESOURCE)v9[9], 1u);
          if ( (v19 == -1 || *((_DWORD *)v9 + 5) == v19) && !*((_BYTE *)v9 + 58) )
          {
            *((_QWORD *)&v29[1] + 1) = v9[10];
            sub_14078D3DC(v9, v29, 0LL);
          }
          ExReleaseResourceLite((PERESOURCE)v9[9]);
          KeLeaveCriticalRegion();
          KeAcquireGuardedMutex(&stru_140C469C0);
          v9 = (_QWORD *)v9[1];
          sub_14078D340(v20);
          if ( v20 == v18 )
            sub_14078D340(v18);
        }
        while ( v9 != v26 );
        v6 = v24;
        break;
      }
      v10 = v26;
    }
    else
    {
      ExReleaseResourceLite((PERESOURCE)v9[9]);
      KeLeaveCriticalRegion();
    }
    KeAcquireGuardedMutex(&stru_140C469C0);
    if ( v23 )
      v9 = (_QWORD *)v9[1];
    else
      v9 = (_QWORD *)*v9;
    sub_14078D340(P);
  }
  KeReleaseGuardedMutex(&stru_140C469C0);
  ObfDereferenceObjectWithTag(Object, 0x4E706E50u);
  return v6;
}
