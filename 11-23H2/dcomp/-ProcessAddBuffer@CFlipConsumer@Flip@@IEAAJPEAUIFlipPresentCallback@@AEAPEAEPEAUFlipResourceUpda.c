/*
 * XREFs of ?ProcessAddBuffer@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@AEAPEAEPEAUFlipResourceUpdateCommandAddBuffer@@@Z @ 0x1801AB438
 * Callers:
 *     ?ProcessPresent@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@IPEAEAEAVCFlipPropertySet@2@@Z @ 0x1801AB7DC (-ProcessPresent@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@IPEAEAEAVCFlipPropertySet@2@@.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall Flip::CFlipConsumer::ProcessAddBuffer(
        Flip::CFlipConsumer *this,
        struct IFlipPresentCallback *a2,
        unsigned __int8 **a3,
        struct FlipResourceUpdateCommandAddBuffer *a4)
{
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 (__fastcall *v12)(struct IFlipPresentCallback *, _BYTE *, HANDLE, unsigned __int64, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)); // rbx
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, _QWORD); // rbx
  unsigned int v14; // edx
  int v15; // ecx
  __int64 (__fastcall *v16)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v17; // r8
  unsigned int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // edx
  int v21; // edi
  HANDLE hObject; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v24[8]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v25; // [rsp+40h] [rbp-30h] BYREF
  void **v26; // [rsp+50h] [rbp-20h] BYREF
  char *v27; // [rsp+58h] [rbp-18h]
  int v28; // [rsp+60h] [rbp-10h]
  __int64 v29; // [rsp+A0h] [rbp+30h] BYREF
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // [rsp+B8h] [rbp+48h] BYREF

  v28 = 0;
  v27 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  hObject = 0LL;
  v26 = &Flip::CFlipPropertySet::`vftable';
  v8 = *((_QWORD *)this + 3);
  v25 = 0LL;
  v9 = NtFlipObjectConsumerQueryBufferInfo(v8, (char *)a4 + 8, v24, &hObject);
  v10 = HRESULTFromNTSTATUS(v9);
  v11 = v10;
  if ( v10 < 0 )
  {
    v14 = 355;
    goto LABEL_19;
  }
  if ( *((_DWORD *)a4 + 4) )
  {
    v28 = *((_DWORD *)a4 + 4);
    v27 = (char *)a4 + 24;
  }
  v12 = *(__int64 (__fastcall **)(struct IFlipPresentCallback *, _BYTE *, HANDLE, unsigned __int64, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)a2 + 16LL);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v30);
  v10 = v12(
          a2,
          v24,
          hObject,
          (unsigned __int64)&v26 & -(__int64)(v28 != 0),
          (__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))&v30);
  v11 = v10;
  if ( v10 < 0 )
  {
    v14 = 370;
    goto LABEL_19;
  }
  v13 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v30;
  if ( v30 )
  {
    v16 = **v30;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v29);
    v10 = v16(v13, &GUID_00000000_0000_0000_c000_000000000046, &v29);
    v11 = v10;
    if ( v10 >= 0 )
    {
      *(_QWORD *)&v25 = *((_QWORD *)a4 + 1);
      *((_QWORD *)&v25 + 1) = v29;
      v18 = *((_DWORD *)this + 14);
      v19 = v18 + 1;
      if ( v18 + 1 < v18 )
      {
        v11 = -2147024362;
        v20 = 181;
        v21 = -2147024362;
LABEL_15:
        DoStackCaptureDirect(v11, v20);
        v14 = 382;
        v15 = v21;
        goto LABEL_20;
      }
      v21 = 0;
      if ( v19 > *((_DWORD *)this + 13) )
      {
        v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 32, 0x10u, v17, &v25);
        v11 = v21;
        if ( v21 < 0 )
        {
          v20 = 192;
          goto LABEL_15;
        }
      }
      else
      {
        *(_OWORD *)(*((_QWORD *)this + 4) + 16LL * *((unsigned int *)this + 14)) = v25;
        *((_DWORD *)this + 14) = v19;
      }
      v11 = v21;
      v29 = 0LL;
      *a3 = (unsigned __int8 *)a4 + *((unsigned int *)a4 + 4) + 24;
      goto LABEL_21;
    }
    v14 = 379;
LABEL_19:
    v15 = v10;
    goto LABEL_20;
  }
  v11 = -2147467259;
  v14 = 375;
  v15 = -2147467259;
LABEL_20:
  DoStackCaptureDirect(v15, v14);
LABEL_21:
  if ( hObject )
    CloseHandle(hObject);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v30);
  return v11;
}
