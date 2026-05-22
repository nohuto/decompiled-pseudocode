/*
 * XREFs of ?AddGraphStrings@CTelemetryHelper@@QEAAJPEAUIWrappedString@Composition@UI@Windows@@@Z @ 0x18001A400
 * Callers:
 *     ?RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUIGraphicsEffect@Effects@Graphics@4@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@@Z @ 0x180019CDC (-RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAVCompositor@234.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTelemetryHelper::AddGraphStrings(
        RTL_SRWLOCK *this,
        struct Windows::UI::Composition::IWrappedString *a2)
{
  unsigned int v3; // edi
  DWORD CurrentThreadId; // eax
  struct Windows::UI::Composition::IWrappedString *v5; // r8
  __int64 v6; // rbp
  RTL_SRWLOCK *v7; // rbx
  __int64 v8; // r12
  unsigned __int8 *v9; // rax
  __int64 v10; // r12
  int v11; // edx
  int v12; // ecx
  unsigned int Ptr; // eax
  unsigned int v14; // edx
  int v15; // ebx
  __int64 v16; // r8
  __int64 Ptr_low; // rax
  unsigned int v18; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  int v23; // [rsp+50h] [rbp+8h] BYREF
  struct Windows::UI::Composition::IWrappedString *v24; // [rsp+58h] [rbp+10h] BYREF

  v24 = a2;
  v3 = 0;
  AcquireSRWLockExclusive(this + 2);
  CurrentThreadId = GetCurrentThreadId();
  v5 = v24;
  LODWORD(this[3].Ptr) = CurrentThreadId;
  if ( !v5 )
    goto LABEL_17;
  v6 = 0LL;
  LOBYTE(this[1].Ptr) = 1;
  v7 = this + 4;
  if ( !LODWORD(this[7].Ptr) )
  {
LABEL_9:
    Ptr = (unsigned int)this[7].Ptr;
    v14 = Ptr + 1;
    if ( Ptr + 1 < Ptr )
    {
      v15 = -2147024362;
      v20 = 181;
      v3 = -2147024362;
    }
    else
    {
      if ( v14 <= HIDWORD(this[6].Ptr) )
      {
        *((_QWORD *)v7->Ptr + LODWORD(this[7].Ptr)) = v5;
        LODWORD(this[7].Ptr) = v14;
        goto LABEL_12;
      }
      v15 = DynArrayImpl<0>::AddMultipleAndSet(&this[4], 8LL, v5, &v24);
      v3 = v15;
      if ( v15 >= 0 )
      {
LABEL_12:
        (**(void (__fastcall ***)(struct Windows::UI::Composition::IWrappedString *))v24)(v24);
        Ptr_low = LODWORD(this[11].Ptr);
        v23 = 1;
        v18 = Ptr_low + 1;
        if ( (int)Ptr_low + 1 < (unsigned int)Ptr_low )
        {
          v15 = -2147024362;
          v21 = 181;
          v3 = -2147024362;
        }
        else
        {
          v15 = 0;
          if ( v18 <= HIDWORD(this[10].Ptr) )
          {
            *((_DWORD *)this[8].Ptr + Ptr_low) = 1;
            LODWORD(this[11].Ptr) = v18;
            goto LABEL_15;
          }
          v15 = DynArrayImpl<0>::AddMultipleAndSet(&this[8], 4LL, v16, &v23);
          v3 = v15;
          if ( v15 >= 0 )
          {
LABEL_15:
            v3 = v15;
            goto LABEL_17;
          }
          v21 = 192;
        }
        DoStackCaptureDirect(v15, v21);
        v22 = 55;
LABEL_26:
        DoStackCaptureDirect(v15, v22);
        goto LABEL_17;
      }
      v20 = 192;
    }
    DoStackCaptureDirect(v15, v20);
    v22 = 53;
    goto LABEL_26;
  }
  while ( 1 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v7->Ptr + v6) + 16LL))(*((_QWORD *)v7->Ptr + v6));
    v9 = (unsigned __int8 *)(*(__int64 (__fastcall **)(struct Windows::UI::Composition::IWrappedString *))(*(_QWORD *)v24 + 16LL))(v24);
    v10 = v8 - (_QWORD)v9;
    do
    {
      v11 = v9[v10];
      v12 = *v9 - v11;
      if ( v12 )
        break;
      ++v9;
    }
    while ( v11 );
    if ( !v12 )
      break;
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= LODWORD(this[7].Ptr) )
    {
      v5 = v24;
      goto LABEL_9;
    }
  }
  ++*((_DWORD *)this[8].Ptr + v6);
LABEL_17:
  LODWORD(this[3].Ptr) = 0;
  ReleaseSRWLockExclusive(this + 2);
  return v3;
}
