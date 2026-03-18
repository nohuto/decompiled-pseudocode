/*
 * XREFs of ?VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z @ 0x1C02150C4
 * Callers:
 *     NtVisualCaptureBits @ 0x1C02125D0 (NtVisualCaptureBits.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C000C9A4 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     OpenDwmHandle @ 0x1C009090C (OpenDwmHandle.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAU_KEVENT@@HPEAPEAV12@@Z @ 0x1C02147E8 (-Create@CEvent@DirectComposition@@SAJPEAU_KEVENT@@HPEAPEAV12@@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::VisualCaptureBits(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        PVOID Object,
        PVOID a9)
{
  int v13; // edi
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  DirectComposition::CResourceMarshaler *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // r9
  DirectComposition::CEvent *v21; // rcx
  DirectComposition::CEvent *v22; // rcx
  int v24; // [rsp+20h] [rbp-38h]
  int v25; // [rsp+20h] [rbp-38h]
  void *v26; // [rsp+30h] [rbp-28h] BYREF
  void *v27; // [rsp+38h] [rbp-20h] BYREF
  DirectComposition::CEvent *v28; // [rsp+60h] [rbp+8h] BYREF

  v28 = 0LL;
  v26 = (void *)-1LL;
  v27 = (void *)-1LL;
  if ( *(int *)(a1 + 24) <= 2 )
  {
    v14 = (unsigned int)(a2 - 1);
    if ( a2
      && v14 < *(_QWORD *)(a1 + 80)
      && (_mm_lfence(),
          v15 = *(_QWORD *)(a1 + 56),
          v16 = v14 * *(_QWORD *)(a1 + 88),
          (v17 = *(DirectComposition::CResourceMarshaler **)(v16 + v15)) != 0LL)
      && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v17 + 96LL))(*(_QWORD *)(v16 + v15), 195LL) )
    {
      v13 = DirectComposition::CEvent::Create(Object, v18, &v28);
      if ( v13 < 0
        || (v13 = OpenDwmHandle(Object, (POBJECT_TYPE)ExEventObjectType, 2u, v19, v24, &v26), v13 < 0)
        || (v13 = OpenDwmHandle(a9, MmSectionObjectType, 3u, v20, v25, &v27), v13 < 0) )
      {
        v22 = v28;
      }
      else
      {
        DirectComposition::CApplicationChannel::ReleaseResource(
          (DirectComposition::CApplicationChannel *)a1,
          *(struct DirectComposition::CResourceMarshaler **)(a1 + 1768));
        v21 = *(DirectComposition::CEvent **)(a1 + 1760);
        if ( v21 )
          DirectComposition::CEvent::`scalar deleting destructor'(v21);
        *(_QWORD *)(a1 + 1760) = v28;
        *(_DWORD *)(a1 + 1784) = a5;
        *(_DWORD *)(a1 + 1788) = a6;
        *(_DWORD *)(a1 + 1792) = a7;
        *(_QWORD *)(a1 + 1800) = v26;
        *(_QWORD *)(a1 + 1808) = v27;
        *(_DWORD *)(a1 + 1776) = a3;
        *(_DWORD *)(a1 + 1780) = a4;
        *(_QWORD *)(a1 + 1768) = v17;
        DirectComposition::CResourceMarshaler::AddRef(v17);
        v22 = 0LL;
      }
      if ( v22 )
        DirectComposition::CEvent::`scalar deleting destructor'(v22);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v13;
}
