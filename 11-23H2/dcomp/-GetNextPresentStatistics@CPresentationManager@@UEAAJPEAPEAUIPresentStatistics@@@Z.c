/*
 * XREFs of ?GetNextPresentStatistics@CPresentationManager@@UEAAJPEAPEAUIPresentStatistics@@@Z @ 0x1801AD880
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18000BE3C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CPresentStatusPresentStatistics@@SAJAEAV?$unique_ptr@VCSerializedConsumerMessage@@U?$default_delete@VCSerializedConsumerMessage@@@std@@@std@@PEAPEAV1@@Z @ 0x1801AD3A4 (-Create@CPresentStatusPresentStatistics@@SAJAEAV-$unique_ptr@VCSerializedConsumerMessage@@U-$def.c)
 *     ?Create@CSerializedConsumerMessage@@SAJPEAXPEAPEAV1@@Z @ 0x1801B092C (-Create@CSerializedConsumerMessage@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?Create@CCompositionFramePresentStatistics@@SAJPEAVCPresentationManager@@AEAV?$unique_ptr@VCSerializedConsumerMessage@@U?$default_delete@VCSerializedConsumerMessage@@@std@@@std@@PEAPEAV1@@Z @ 0x1801B0C54 (-Create@CCompositionFramePresentStatistics@@SAJPEAVCPresentationManager@@AEAV-$unique_ptr@VCSeri.c)
 *     ?Create@CIndependentFlipFramePresentStatistics@@SAJPEAVCPresentationManager@@AEAV?$unique_ptr@VCSerializedConsumerMessage@@U?$default_delete@VCSerializedConsumerMessage@@@std@@@std@@PEAPEAV1@@Z @ 0x1801B1118 (-Create@CIndependentFlipFramePresentStatistics@@SAJPEAVCPresentationManager@@AEAV-$unique_ptr@VC.c)
 */

__int64 __fastcall CPresentationManager::GetNextPresentStatistics(
        CPresentationManager *this,
        struct IPresentStatistics **a2)
{
  void *v4; // rcx
  int v5; // ebx
  void **v6; // rdi
  char *i; // rdx
  __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  _QWORD *v14; // rdi
  struct CSerializedConsumerMessage *v16; // [rsp+28h] [rbp-18h] BYREF
  char v17; // [rsp+30h] [rbp-10h]
  void *v18; // [rsp+70h] [rbp+30h] BYREF
  struct IPresentStatistics *v19; // [rsp+80h] [rbp+40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+88h] [rbp+48h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  v4 = (void *)*((_QWORD *)this + 13);
  v18 = 0LL;
  v16 = 0LL;
  v17 = 1;
  v5 = CSerializedConsumerMessage::Create(v4, &v16);
  if ( v17 )
  {
    v6 = (void **)v18;
    v18 = v16;
    if ( v6 )
    {
      if ( *v6 )
      {
        std::_Deallocate<16,0>(*v6, (_BYTE *)v6[2] - (_BYTE *)*v6);
        *v6 = 0LL;
        v6[1] = 0LL;
        v6[2] = 0LL;
      }
      operator delete(v6);
    }
  }
  if ( v5 < 0 )
  {
    v9 = 511;
    v10 = v5;
LABEL_30:
    DoStackCaptureDirect(v10, v9);
  }
  else
  {
    v5 = -2147467259;
    for ( i = *(char **)v18; ; i += *((unsigned int *)i + 4) + 20 )
    {
      if ( (unsigned __int64)i >= *((_QWORD *)v18 + 1) )
      {
        v9 = 515;
        v10 = -2147467259;
        goto LABEL_30;
      }
      v8 = *(_QWORD *)i - *(_QWORD *)&GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8.Data1;
      if ( *(_QWORD *)i == *(_QWORD *)&GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8.Data1 )
        v8 = *((_QWORD *)i + 1) - *(_QWORD *)GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8.Data4;
      if ( !v8 && *((_DWORD *)i + 4) == 4 )
        break;
    }
    v5 = 0;
    switch ( *((_DWORD *)i + 5) )
    {
      case 1:
        v19 = 0LL;
        v13 = CPresentStatusPresentStatistics::Create((__int64 *)&v18, (__int64 *)&v19);
        v5 = v13;
        if ( v13 < 0 )
        {
          DoStackCaptureDirect(v13, 0x20Du);
        }
        else
        {
          *a2 = v19;
          v19 = 0LL;
        }
        break;
      case 2:
        v19 = 0LL;
        v12 = CCompositionFramePresentStatistics::Create(this, &v18, &v19);
        v5 = v12;
        if ( v12 < 0 )
        {
          DoStackCaptureDirect(v12, 0x21Bu);
        }
        else
        {
          *a2 = v19;
          v19 = 0LL;
        }
        break;
      case 3:
        v19 = 0LL;
        v11 = CIndependentFlipFramePresentStatistics::Create(this);
        v5 = v11;
        if ( v11 < 0 )
        {
          DoStackCaptureDirect(v11, 0x229u);
        }
        else
        {
          *a2 = v19;
          v19 = 0LL;
        }
        break;
      default:
        RaiseFailFastException(0LL, 0LL, 0);
        goto LABEL_31;
    }
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v19);
  }
LABEL_31:
  v14 = v18;
  if ( v18 )
  {
    if ( *(_QWORD *)v18 )
    {
      std::_Deallocate<16,0>(*(void **)v18, *((_QWORD *)v18 + 2) - *(_QWORD *)v18);
      *v14 = 0LL;
      v14[1] = 0LL;
      v14[2] = 0LL;
    }
    operator delete(v14);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v5;
}
