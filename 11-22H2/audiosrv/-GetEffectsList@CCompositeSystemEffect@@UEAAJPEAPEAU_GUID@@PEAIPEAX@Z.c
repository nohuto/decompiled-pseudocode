/*
 * XREFs of ?GetEffectsList@CCompositeSystemEffect@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x180156A60
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@H@Z @ 0x18002D0E0 (--A-$CSimpleArray@V-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelper@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x180067992 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     memcpy_0 @ 0x18006A809 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800F0FC8 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??1?$CSimpleArray@PEAU_GUID@@V?$CSimpleArrayEqualHelper@PEAU_GUID@@@ATL@@@ATL@@QEAA@XZ @ 0x180156390 (--1-$CSimpleArray@PEAU_GUID@@V-$CSimpleArrayEqualHelper@PEAU_GUID@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?Add@?$CSimpleArray@IV?$CSimpleArrayEqualHelper@I@ATL@@@ATL@@QEAAHAEBI@Z @ 0x1801568C0 (-Add@-$CSimpleArray@IV-$CSimpleArrayEqualHelper@I@ATL@@@ATL@@QEAAHAEBI@Z.c)
 *     ?Add@?$CSimpleArray@PEAU_GUID@@V?$CSimpleArrayEqualHelper@PEAU_GUID@@@ATL@@@ATL@@QEAAHAEBQEAU_GUID@@@Z @ 0x180156954 (-Add@-$CSimpleArray@PEAU_GUID@@V-$CSimpleArrayEqualHelper@PEAU_GUID@@@ATL@@@ATL@@QEAAHAEBQEAU_GU.c)
 */

__int64 __fastcall CCompositeSystemEffect::GetEffectsList(
        CCompositeSystemEffect *this,
        struct _GUID **a2,
        unsigned int *a3,
        void *a4)
{
  unsigned int v7; // r14d
  signed int v8; // edi
  _QWORD *v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  _QWORD *v12; // rdi
  _DWORD *v13; // rsi
  SIZE_T v14; // rbx
  struct _GUID *v15; // rdx
  int v16; // r8d
  int v17; // r12d
  __int64 v18; // rax
  unsigned int *v19; // r9
  struct _GUID *v20; // rcx
  unsigned __int64 v21; // r15
  int v23; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-4Ch]
  void *Src; // [rsp+38h] [rbp-48h]
  __int64 v26; // [rsp+40h] [rbp-40h]
  _DWORD *v27; // [rsp+48h] [rbp-38h] BYREF
  struct _GUID *v28; // [rsp+50h] [rbp-30h]
  void *v29; // [rsp+58h] [rbp-28h] BYREF
  __int64 v30; // [rsp+60h] [rbp-20h]
  void *Block; // [rsp+68h] [rbp-18h] BYREF
  __int64 v32; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v29 = 0LL;
  v7 = 0;
  v30 = 0LL;
  Block = 0LL;
  v32 = 0LL;
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    v8 = 0;
    *a3 = 0;
    if ( *((int *)this + 28) > 0 )
    {
      do
      {
        v9 = (_QWORD *)ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                         (__int64)this + 104,
                         v8);
        v10 = (*(__int64 (__fastcall **)(_QWORD, _DWORD **, int *, void *))(*(_QWORD *)*v9 + 24LL))(*v9, &v27, &v23, a4);
        v11 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4C5,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v10);
LABEL_35:
          ATL::CSimpleArray<_GUID *,ATL::CSimpleArrayEqualHelper<_GUID *>>::~CSimpleArray<_GUID *,ATL::CSimpleArrayEqualHelper<_GUID *>>((__int64)&Block);
          ATL::CSimpleArray<_GUID *,ATL::CSimpleArrayEqualHelper<_GUID *>>::~CSimpleArray<_GUID *,ATL::CSimpleArrayEqualHelper<_GUID *>>((__int64)&v29);
          return v11;
        }
        ATL::CSimpleArray<_GUID *,ATL::CSimpleArrayEqualHelper<_GUID *>>::Add((__int64)&v29, &v27);
        ATL::CSimpleArray<unsigned int,ATL::CSimpleArrayEqualHelper<unsigned int>>::Add((__int64)&Block, &v23);
        v7 += v23;
        ++v8;
      }
      while ( v8 < *((_DWORD *)this + 28) );
      v12 = v29;
      v13 = Block;
      if ( v7 )
      {
        v14 = 16LL * v7;
        v28 = (struct _GUID *)CoTaskMemAlloc(v14);
        v15 = v28;
        if ( !v28 )
        {
          v11 = -2147024882;
          goto LABEL_35;
        }
        v16 = 0;
        v17 = 0;
        v23 = 0;
        if ( (int)v30 > 0 )
        {
          v18 = 0LL;
          v27 = v13;
          v26 = 0LL;
          v19 = v13;
          while ( 1 )
          {
            if ( v18 < 0 || v17 >= (int)v30 )
            {
              ATL::_AtlRaiseException(0xC000008C);
              __debugbreak();
            }
            Src = (void *)v12[v18];
            if ( v17 >= (int)v32 )
            {
              ATL::_AtlRaiseException(0xC000008C);
              __debugbreak();
            }
            v24 = *v19;
            v20 = &v15[v16];
            v21 = 16LL * v24;
            if ( v21 )
            {
              if ( !v20 )
                goto LABEL_22;
              if ( Src && v14 >= v21 )
              {
                memcpy_0(v20, Src, 16LL * v24);
                goto LABEL_24;
              }
              memset_0(v20, 0, v14);
              if ( Src )
              {
                if ( v14 >= v21 )
                  goto LABEL_24;
                *(_DWORD *)_o__errno(v20) = 34;
              }
              else
              {
LABEL_22:
                *(_DWORD *)_o__errno(v20) = 22;
              }
              invalid_parameter_noinfo();
            }
LABEL_24:
            v14 -= v21;
            v23 += v24;
            CoTaskMemFree(Src);
            ++v17;
            v18 = v26 + 1;
            v15 = v28;
            v19 = v27 + 1;
            ++v26;
            ++v27;
            if ( v17 >= (int)v30 )
              break;
            v16 = v23;
          }
        }
        *a2 = v15;
        *a3 = v7;
      }
      if ( v13 )
        free(v13);
      if ( v12 )
        free(v12);
    }
    return 0LL;
  }
  else
  {
    ATL::CSimpleArray<_GUID *,ATL::CSimpleArrayEqualHelper<_GUID *>>::~CSimpleArray<_GUID *,ATL::CSimpleArrayEqualHelper<_GUID *>>((__int64)&Block);
    ATL::CSimpleArray<_GUID *,ATL::CSimpleArrayEqualHelper<_GUID *>>::~CSimpleArray<_GUID *,ATL::CSimpleArrayEqualHelper<_GUID *>>((__int64)&v29);
    return 2147500035LL;
  }
}
