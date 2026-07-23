/*
 * XREFs of sub_140662780 @ 0x140662780
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140662AC8 @ 0x140662AC8 (sub_140662AC8.c)
 *     sub_1406651C8 @ 0x1406651C8 (sub_1406651C8.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_140799DB0 @ 0x140799DB0 (sub_140799DB0.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_140662780(HANDLE Handle, char a2, int *a3, unsigned int a4, _DWORD *Address, _DWORD *a6)
{
  void *v9; // r12
  KPROCESSOR_MODE v10; // di
  __int64 v11; // rsi
  _DWORD *v12; // rbx
  __int64 result; // rax
  __int64 v14; // rdx
  NTSTATUS v15; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // rsi
  __int64 v18; // r13
  int v19; // r8d
  __int64 v20; // r14
  int v21; // eax
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rdx
  signed __int32 v26[8]; // [rsp+0h] [rbp-A8h] BYREF
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-80h]
  PSID DestinationSid; // [rsp+30h] [rbp-78h]
  KPROCESSOR_MODE v29; // [rsp+50h] [rbp-58h]
  __int64 v30; // [rsp+54h] [rbp-54h] BYREF
  unsigned int v31; // [rsp+5Ch] [rbp-4Ch]
  int v32; // [rsp+60h] [rbp-48h]
  _DWORD Object[3]; // [rsp+64h] [rbp-44h] BYREF
  __int64 v34; // [rsp+70h] [rbp-38h] BYREF
  __int64 v35; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v36; // [rsp+C8h] [rbp+20h]

  v36 = a4;
  v32 = 0;
  v34 = 0LL;
  Object[0] = 0;
  v30 = 0LL;
  LOBYTE(v35) = 0;
  v9 = 0LL;
  if ( !a2 && !a3 )
    return 3221225485LL;
  v10 = *((_BYTE *)KeGetCurrentThread() + 562);
  v29 = v10;
  if ( v10 )
  {
    if ( a2 )
    {
      v11 = 0x7FFFFFFF0000LL;
    }
    else
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = 0x7FFFFFFF0000LL;
    }
    v12 = Address;
    if ( Address )
    {
      ProbeForWrite(Address, a4, 4u);
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v11 = (__int64)a6;
      *(_DWORD *)v11 = *(_DWORD *)v11;
    }
  }
  else
  {
    v12 = Address;
  }
  if ( a2
    || (v32 = *a3,
        result = sub_140799DB0(a3 + 2, 0, (int)HandleInformation, (int)DestinationSid, (__int64)&v34, (__int64)Object),
        v31 = result,
        (int)result >= 0) )
  {
    *(_QWORD *)&Object[1] = 0LL;
    v15 = ObReferenceObjectByHandle(
            Handle,
            v12 != 0LL ? 72 : 64,
            (POBJECT_TYPE)SeTokenObjectType,
            v10,
            (PVOID *)&Object[1],
            0LL);
    if ( v15 < 0 )
    {
      if ( v34 )
      {
        LOBYTE(v14) = v10;
        sub_1406651C8(v34, v14);
      }
      return (unsigned int)v15;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      v17 = *(_QWORD *)&Object[1];
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(*(_QWORD *)&Object[1] + 48LL), 1u);
      _InterlockedOr(v26, 0);
      v18 = v34;
      LOBYTE(v19) = a2;
      v20 = *(_QWORD *)&Object[1];
      v21 = sub_140662AC8(
              Object[1],
              0,
              v19,
              v32,
              v34,
              (__int64)v12,
              0LL,
              (__int64)&v30,
              (__int64)&v30 + 4,
              (__int64)&v35);
      v31 = v21;
      if ( v12 )
      {
        v22 = (int)a6;
        *a6 = v30;
      }
      if ( v21 < 0 )
        goto LABEL_24;
      if ( !v12 )
      {
LABEL_20:
        LOBYTE(v23) = a2;
        LOBYTE(v22) = 1;
        v31 = sub_140662AC8(v20, v22, v23, v32, v18, (__int64)v12, v9, (__int64)&v30, (__int64)&v30 + 4, (__int64)&v35);
        if ( v12 )
          *v12 = HIDWORD(v30);
        if ( (_BYTE)v35 )
          *(_QWORD *)(v20 + 56) = _InterlockedIncrement64(&qword_140C0DA70);
LABEL_24:
        _InterlockedOr(v26, 0);
        ExReleaseResourceLite(*(PERESOURCE *)(v17 + 48));
        sub_1402F9540((__int64)KeGetCurrentThread());
        ObfDereferenceObject(*(PVOID *)&Object[1]);
        if ( v34 )
        {
          LOBYTE(v24) = v10;
          sub_1406651C8(v34, v24);
        }
        return v31;
      }
      if ( (unsigned int)v30 <= v36 )
      {
        v9 = (void *)(((unsigned __int64)v12 + (unsigned int)(16 * HIDWORD(v30)) + 11) & 0xFFFFFFFFFFFFFFFCuLL);
        goto LABEL_20;
      }
      _InterlockedOr(v26, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(v17 + 48));
      sub_1402F9540((__int64)KeGetCurrentThread());
      ObfDereferenceObject(*(PVOID *)&Object[1]);
      if ( v34 )
      {
        LOBYTE(v25) = v10;
        sub_1406651C8(v34, v25);
      }
      return 3221225507LL;
    }
  }
  return result;
}
