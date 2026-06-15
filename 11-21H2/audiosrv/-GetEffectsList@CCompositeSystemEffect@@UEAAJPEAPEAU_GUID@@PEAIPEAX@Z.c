/*
 * XREFs of ?GetEffectsList@CCompositeSystemEffect@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x18014EFE0
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@H@Z @ 0x18004201C (--A-$CSimpleArray@V-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelper@.c)
 *     _invalid_parameter_noinfo @ 0x18005F922 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800C5F24 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?Add@?$CSimpleArray@IV?$CSimpleArrayEqualHelper@I@ATL@@@ATL@@QEAAHAEBI@Z @ 0x18014EE54 (-Add@-$CSimpleArray@IV-$CSimpleArrayEqualHelper@I@ATL@@@ATL@@QEAAHAEBI@Z.c)
 *     ?Add@?$CSimpleArray@PEAU_GUID@@V?$CSimpleArrayEqualHelper@PEAU_GUID@@@ATL@@@ATL@@QEAAHAEBQEAU_GUID@@@Z @ 0x18014EEF0 (-Add@-$CSimpleArray@PEAU_GUID@@V-$CSimpleArrayEqualHelper@PEAU_GUID@@@ATL@@@ATL@@QEAAHAEBQEAU_GU.c)
 */

__int64 __fastcall CCompositeSystemEffect::GetEffectsList(
        CCompositeSystemEffect *this,
        struct _GUID **a2,
        unsigned int *a3,
        void *a4)
{
  unsigned int v4; // edi
  signed int v8; // esi
  _QWORD *v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  SIZE_T v12; // rbx
  struct _GUID *v13; // rdx
  __int64 v14; // rcx
  int v15; // r14d
  __int64 v16; // r15
  void *v17; // r13
  struct _GUID *v18; // rcx
  unsigned __int64 v19; // rsi
  unsigned int v21; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-2Ch]
  struct _GUID *v23; // [rsp+38h] [rbp-28h] BYREF
  void *v24; // [rsp+40h] [rbp-20h] BYREF
  int v25; // [rsp+48h] [rbp-18h]
  int v26; // [rsp+4Ch] [rbp-14h]
  void *Block; // [rsp+50h] [rbp-10h] BYREF
  int v28; // [rsp+58h] [rbp-8h]
  int v29; // [rsp+5Ch] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v24 = 0LL;
  v4 = 0;
  v25 = 0;
  v26 = 0;
  Block = 0LL;
  v28 = 0;
  v29 = 0;
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    v8 = 0;
    *a3 = 0;
    if ( *((int *)this + 22) > 0 )
    {
      do
      {
        v9 = (_QWORD *)ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                         (__int64)this + 80,
                         v8);
        v10 = (*(__int64 (__fastcall **)(_QWORD, struct _GUID **, unsigned int *, void *))(*(_QWORD *)*v9 + 24LL))(
                *v9,
                &v23,
                &v21,
                a4);
        v11 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x43D,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v10);
          goto LABEL_32;
        }
        ATL::CSimpleArray<_GUID *,ATL::CSimpleArrayEqualHelper<_GUID *>>::Add((__int64)&v24, &v23);
        ATL::CSimpleArray<unsigned int,ATL::CSimpleArrayEqualHelper<unsigned int>>::Add((__int64)&Block, &v21);
        v4 += v21;
        ++v8;
      }
      while ( v8 < *((_DWORD *)this + 22) );
      if ( v4 )
      {
        v12 = 16LL * v4;
        v23 = (struct _GUID *)CoTaskMemAlloc(v12);
        v13 = v23;
        if ( !v23 )
        {
          v11 = -2147024882;
          goto LABEL_32;
        }
        v14 = 0LL;
        v15 = 0;
        v21 = 0;
        if ( v25 > 0 )
        {
          v16 = 0LL;
          while ( 1 )
          {
            if ( v16 < 0 || v15 >= v25 )
            {
              ATL::_AtlRaiseException(0xC000008C);
              __debugbreak();
            }
            v17 = (void *)*((_QWORD *)v24 + v16);
            if ( v15 >= v28 )
            {
              ATL::_AtlRaiseException(0xC000008C);
              __debugbreak();
            }
            v18 = &v13[v14];
            v22 = *((_DWORD *)Block + v16);
            v19 = 16LL * v22;
            if ( v19 )
            {
              if ( !v18 )
                goto LABEL_22;
              if ( v17 && v12 >= v19 )
              {
                memcpy_0(v18, v17, 16LL * v22);
                goto LABEL_24;
              }
              memset_0(v18, 0, v12);
              if ( v17 )
              {
                if ( v12 >= v19 )
                  goto LABEL_24;
                *(_DWORD *)_o__errno(v18, v13) = 34;
              }
              else
              {
LABEL_22:
                *(_DWORD *)_o__errno(v18, v13) = 22;
              }
              invalid_parameter_noinfo();
            }
LABEL_24:
            v21 += v22;
            v12 -= v19;
            CoTaskMemFree(v17);
            v13 = v23;
            ++v15;
            ++v16;
            if ( v15 >= v25 )
              break;
            v14 = v21;
          }
        }
        *a2 = v13;
        *a3 = v4;
      }
    }
    v11 = 0;
  }
  else
  {
    v11 = -2147467261;
  }
LABEL_32:
  if ( Block )
    free(Block);
  if ( v24 )
    free(v24);
  return v11;
}
