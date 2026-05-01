/*
 * XREFs of ?GetSimpleTempAppVisualArray@CDropFeedback@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1805E9950
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1805F1EAC (-CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CSimpleTempAppVisual_CreateAndAddToArray@@YAJPEAUITemporaryAppVisual@@PEAUITemporaryAppVisualArray@@@Z @ 0x1805F4FC8 (-CSimpleTempAppVisual_CreateAndAddToArray@@YAJPEAUITemporaryAppVisual@@PEAUITemporaryAppVisualAr.c)
 */

__int64 __fastcall CDropFeedback::GetSimpleTempAppVisualArray(
        const struct _GUID *this,
        struct ITemporaryAppVisualArray **a2)
{
  int Instance; // eax
  struct ITemporaryAppVisualArray *v5; // rdi
  int v6; // r14d
  unsigned int v7; // r15d
  __int64 v8; // rsi
  int (__fastcall *v9)(__int64, _QWORD, GUID *, int (__fastcall ****)(_QWORD, GUID *, struct ITemporaryAppVisual **)); // rbx
  int (__fastcall ***v10)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v11)(_QWORD, GUID *, struct ITemporaryAppVisual **); // rsi
  struct ITemporaryAppVisualArray *v13[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+88h] [rbp+48h] BYREF
  int (__fastcall ***v15)(_QWORD, GUID *, struct ITemporaryAppVisual **); // [rsp+90h] [rbp+50h] BYREF
  struct ITemporaryAppVisual *v16; // [rsp+98h] [rbp+58h] BYREF

  *a2 = 0LL;
  v13[0] = 0LL;
  Instance = CTempAppVisualArray::CreateInstance(this, (void **)v13);
  v5 = v13[0];
  v6 = Instance;
  if ( Instance >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)&this[5].Data1 + 24LL))(
      *(_QWORD *)&this[5].Data1,
      &v14);
    v7 = 0;
    if ( v14 )
    {
      while ( v6 >= 0 )
      {
        v8 = *(_QWORD *)&this[5].Data1;
        v15 = 0LL;
        v9 = *(int (__fastcall **)(__int64, _QWORD, GUID *, int (__fastcall ****)(_QWORD, GUID *, struct ITemporaryAppVisual **)))(*(_QWORD *)v8 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v15);
        if ( v9(v8, v7, &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810, &v15) >= 0
          && ((unsigned int (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, struct ITemporaryAppVisual **)))(*v15)[12])(v15) != 1
          && ((unsigned int (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, struct ITemporaryAppVisual **)))(*v15)[12])(v15) != 2 )
        {
          v10 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v15;
          v16 = 0LL;
          v11 = **v15;
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v16);
          if ( v11(v10, &GUID_114ed843_c914_443d_9588_6ffb643e73d0, &v16) >= 0 )
            v6 = CSimpleTempAppVisual_CreateAndAddToArray(v16, v5);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v16);
        }
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v15);
        if ( ++v7 >= v14 )
        {
          if ( v6 < 0 )
            break;
          goto LABEL_12;
        }
      }
    }
    else
    {
LABEL_12:
      v6 = CSimpleTempAppVisual_CreateAndAddToArray(
             (struct ITemporaryAppVisual *)((unsigned __int64)&this[-1] & -(__int64)(this != (const struct _GUID *)48)),
             v5);
      if ( v6 >= 0 )
      {
        (*(void (__fastcall **)(struct ITemporaryAppVisualArray *, unsigned int *))(*(_QWORD *)v5 + 24LL))(v5, &v14);
        if ( v14 )
        {
          Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)v13);
          v6 = 0;
          *a2 = v5;
        }
        else
        {
          v6 = -2147023728;
        }
      }
    }
  }
  if ( v5 )
    (*(void (__fastcall **)(struct ITemporaryAppVisualArray *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v6;
}
