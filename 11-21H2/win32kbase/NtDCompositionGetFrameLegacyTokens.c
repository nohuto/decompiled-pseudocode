/*
 * XREFs of NtDCompositionGetFrameLegacyTokens @ 0x1C0089820
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0059B88 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

__int64 __fastcall NtDCompositionGetFrameLegacyTokens(ULONG64 a1, ULONG64 a2, _DWORD *a3, __int64 a4)
{
  _DWORD *v5; // r15
  int v6; // r13d
  int v7; // r12d
  DirectComposition::CConnection *v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  struct _ERESOURCE *v19; // rsi
  signed int v20; // [rsp+30h] [rbp-68h]
  void *v21; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v22; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+48h] [rbp-50h] BYREF
  __int64 v24; // [rsp+50h] [rbp-48h]
  void *Src; // [rsp+58h] [rbp-40h] BYREF
  size_t Size; // [rsp+A0h] [rbp+8h] BYREF
  ULONG64 v27; // [rsp+A8h] [rbp+10h]
  _DWORD *v28; // [rsp+B0h] [rbp+18h]
  int v29; // [rsp+B8h] [rbp+20h] BYREF

  v28 = a3;
  v27 = a2;
  v5 = (_DWORD *)a2;
  v6 = 0;
  LODWORD(Size) = 0;
  v7 = 0;
  v24 = 0LL;
  if ( a1 )
  {
    a2 = a1 + 8;
    if ( a1 + 8 < a1 || a2 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v24 = *(_QWORD *)a1;
    a1 = v24 == 0 ? 0xC000000D : 0;
    v20 = v24 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v20 = -1073741811;
  }
  if ( v20 >= 0 )
  {
    if ( (PVOID)PsGetCurrentProcess(a1, a2, a3, a4) == g_pepDwm )
    {
      KeEnterCriticalRegion();
      v8 = 0LL;
      v9 = 0LL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11, v10, v12, v13);
      if ( CurrentProcessWin32Process )
        v9 = *(_QWORD *)(CurrentProcessWin32Process + 256);
      if ( v9 )
      {
        v15 = *(struct _ERESOURCE **)(v9 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v15, 1u);
        v8 = *(DirectComposition::CConnection **)(v9 + 24);
        if ( v8 )
          _InterlockedIncrement((volatile signed __int32 *)v8);
        ExReleaseResourceLite(*(PERESOURCE *)(v9 + 32));
        KeLeaveCriticalRegion();
      }
      if ( v8 )
        goto LABEL_15;
      v19 = DirectComposition::CConnection::s_pSessionConnectionLock;
      if ( DirectComposition::CConnection::s_pSessionConnectionLock )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v19, 1u);
        v8 = DirectComposition::CConnection::s_pSessionConnection;
        if ( DirectComposition::CConnection::s_pSessionConnection )
          _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
        ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
        KeLeaveCriticalRegion();
      }
      if ( v8 )
      {
LABEL_15:
        v23 = 0LL;
        v16 = -1073741275;
        v17 = *((_QWORD *)v8 + 23);
        if ( v17 )
          v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v17 + 32LL))(v17, v24, &v23);
        v20 = v16;
        if ( v16 >= 0 )
        {
          v21 = 0LL;
          v22 = 0LL;
          v20 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned __int64 *))(**((_QWORD **)v8 + 32) + 56LL))(
                  *((_QWORD *)v8 + 32),
                  &v21,
                  &v22);
          if ( v20 >= 0 )
          {
            do
            {
              Src = 0LL;
              LODWORD(Size) = 0;
              v29 = 0;
              v7 = (*(unsigned __int8 (__fastcall **)(__int64, void **, size_t *, int *))(*(_QWORD *)v23 + 40LL))(
                     v23,
                     &Src,
                     &Size,
                     &v29);
              if ( (_DWORD)Size )
              {
                memmove(v21, Src, (unsigned int)Size);
                v21 = (char *)v21 + (unsigned int)Size;
                v22 -= (unsigned int)Size;
                v6 += v29;
              }
            }
            while ( v7 && v22 >= 0x800 );
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(v8);
      }
      else
      {
        v20 = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      v20 = -1073741790;
    }
  }
  if ( v5 + 1 < v5 || (unsigned __int64)(v5 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *v5 = v6;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v7;
  return (unsigned int)v20;
}
