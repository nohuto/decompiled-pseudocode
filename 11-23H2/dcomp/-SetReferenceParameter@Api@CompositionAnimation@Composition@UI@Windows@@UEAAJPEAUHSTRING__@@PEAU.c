/*
 * XREFs of ?SetReferenceParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUICompositionObject@345@@Z @ 0x1800595E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Reset@AnimationObjectInfoCache@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAVContextSession@WRL2@Microsoft@@@Z @ 0x180029C40 (-Reset@AnimationObjectInfoCache@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAVContextSes.c)
 *     ?EnsureReferenceCleared@ParameterEntry@@QEAAXPEAVContextSession@WRL2@Microsoft@@@Z @ 0x18003E52C (-EnsureReferenceCleared@ParameterEntry@@QEAAXPEAVContextSession@WRL2@Microsoft@@@Z.c)
 *     ?CompareAnimationNames@@YAHPEBG0@Z @ 0x18005BF14 (-CompareAnimationNames@@YAHPEBG0@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::Api::SetReferenceParameter(
        Windows::UI::Composition::CompositionAnimation::Api *this,
        HSTRING a2,
        struct IUnknown *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r15
  int v7; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v8; // rdi
  int v9; // ebx
  const wchar_t *v10; // rax
  const wchar_t *v11; // rbx
  size_t v12; // r8
  char v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r10
  unsigned __int64 v18; // rdx
  const wchar_t *v19; // rax
  char v20; // dl
  int v21; // eax
  __int64 v22; // rdx
  Microsoft::WRL2::NestableRuntimeClass **v23; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v24; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v25; // rcx
  unsigned __int64 v26; // rcx
  Microsoft::WRL2::NestableRuntimeClass **inserted; // rax
  Microsoft::WRL2::NestableRuntimeClass *v28; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v29; // rcx
  int v30; // eax
  signed __int32 v31; // eax
  Microsoft::WRL2::NestableRuntimeClass *v32; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v33; // rcx
  const unsigned __int16 *StringRawBuffer; // rax
  __int64 v36; // rdx
  unsigned int v37; // edx
  int v38; // ecx
  void *v39; // rcx
  unsigned __int64 v40; // rdx
  void *v41; // rcx
  unsigned __int64 v42; // rdx
  struct Microsoft::WRL2::ContextSession *v43; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v44; // rcx
  unsigned __int64 v45; // rdx
  unsigned __int8 NewElement[8]; // [rsp+20h] [rbp-79h] BYREF
  HSTRING newString; // [rsp+28h] [rbp-71h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v48; // [rsp+30h] [rbp-69h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v49; // [rsp+38h] [rbp-61h] BYREF
  HSTRING Buffer; // [rsp+40h] [rbp-59h] BYREF
  int v51; // [rsp+48h] [rbp-51h]
  Microsoft::WRL2::NestableRuntimeClass *v52[2]; // [rsp+50h] [rbp-49h]
  int v53; // [rsp+60h] [rbp-39h]
  void *v54; // [rsp+68h] [rbp-31h]
  HSTRING v55; // [rsp+78h] [rbp-21h] BYREF
  int v56; // [rsp+80h] [rbp-19h]
  Microsoft::WRL2::NestableRuntimeClass *v57[2]; // [rsp+88h] [rbp-11h]
  int v58; // [rsp+98h] [rbp-1h]
  void *v59; // [rsp+A0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)this - 96) & 2) != 0 )
  {
    v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           (struct Microsoft::WRL2::ContextSession *)v3,
           a3,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionObject::s_InterfaceType,
           &v48);
    v8 = v48;
    v9 = v7;
    v49 = v48;
    if ( v7 < 0 )
    {
      v37 = 1741;
      v38 = v7;
      goto LABEL_87;
    }
    if ( !v48 )
    {
      v9 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0xEAu);
      goto LABEL_47;
    }
    if ( !a2
      || (v10 = WindowsGetStringRawBuffer(a2, 0LL), (v11 = v10) == 0LL)
      || (v12 = wcsnlen(v10, 0x104uLL), v12 - 1 > 0x102) )
    {
LABEL_62:
      StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
      if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"this.FinalValue") )
      {
        v36 = 1212LL;
        goto LABEL_64;
      }
      if ( !a2 )
      {
        v19 = 0LL;
        goto LABEL_66;
      }
LABEL_14:
      v19 = WindowsGetStringRawBuffer(a2, 0LL);
      if ( v19 && *v19 )
      {
        v20 = 0;
LABEL_17:
        if ( v20 )
        {
          v21 = (aThis[0] == 0) - 1;
        }
        else if ( !aThis[0] || (v21 = _wcsicmp_l(v19, L"this", 0LL), (unsigned int)(v21 + 1) > 2) )
        {
LABEL_20:
          NewElement[0] = 0;
          newString = 0LL;
          v51 = 0;
          *(_OWORD *)v52 = 0LL;
          v53 = 0;
          Buffer = a2;
          v23 = (Microsoft::WRL2::NestableRuntimeClass **)RtlLookupElementGenericTable(
                                                            (PRTL_GENERIC_TABLE)((char *)this + 64),
                                                            &Buffer);
          if ( v51 == 104 )
          {
            v39 = v54;
            if ( !v54 )
              goto LABEL_22;
            v40 = 24LL;
          }
          else
          {
            if ( v51 != 265 || (v39 = v54) == 0LL )
            {
LABEL_22:
              v24 = v52[1];
              if ( v52[1] )
              {
                v52[1] = 0LL;
                (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v24 + 16LL))(v24);
              }
              v25 = v52[0];
              if ( v52[0] )
              {
                v52[0] = 0LL;
                Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v25);
              }
              if ( v23 )
              {
LABEL_36:
                if ( !NewElement[0] && *((_DWORD *)v23 + 8) == 2 )
                {
                  v43 = (struct Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 13);
                  --*((_DWORD *)this + 44);
                  ParameterEntry::EnsureReferenceCleared((ParameterEntry *)v23, v43);
                  Windows::UI::Composition::CompositionAnimation::AnimationObjectInfoCache::Reset(
                    (Windows::UI::Composition::CompositionAnimation::Api *)((char *)this + 184),
                    *((struct Microsoft::WRL2::ContextSession **)this - 13));
                }
                v30 = *((_DWORD *)v23 + 2);
                if ( v30 == 104 && (v44 = v23[5]) != 0LL )
                {
                  v45 = 24LL;
                }
                else
                {
                  if ( v30 != 265 )
                    goto LABEL_39;
                  v44 = v23[5];
                  if ( !v44 )
                    goto LABEL_39;
                  v45 = 64LL;
                }
                operator delete(v44, v45);
                v23[5] = 0LL;
LABEL_39:
                *((_DWORD *)v23 + 2) = 0;
                if ( v23[2] != v8 )
                {
                  v31 = _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 4, 1u);
                  v8 = v48;
                  if ( !v31 )
                    (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *))(*(_QWORD *)v48 + 80LL))(v48);
                  v32 = v23[2];
                  v23[2] = v8;
                  if ( v32 )
                    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v32);
                }
                *((_DWORD *)v23 + 8) = 1;
                v33 = v23[3];
                if ( v33 )
                {
                  v23[3] = 0LL;
                  (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v33 + 16LL))(v33);
                }
                v9 = 0;
LABEL_47:
                if ( v9 >= 0 )
                {
                  v9 = 0;
                  if ( v8 )
                  {
                    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 4, 0xFFFFFFFF) == 1 )
                    {
                      LOBYTE(v22) = 1;
                      (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *, __int64))(*(_QWORD *)v48 + 64LL))(
                        v48,
                        v22);
                    }
                  }
                  goto LABEL_51;
                }
                goto LABEL_65;
              }
              v56 = 0;
              v58 = 0;
              *(_OWORD *)v57 = 0LL;
              if ( WindowsDuplicateString(a2, &newString) < 0 )
                Microsoft::WRL2::FailFast::OutOfMemory(v26);
              v55 = newString;
              inserted = (Microsoft::WRL2::NestableRuntimeClass **)RtlInsertElementGenericTable(
                                                                     (PRTL_GENERIC_TABLE)((char *)this + 64),
                                                                     &v55,
                                                                     0x38u,
                                                                     NewElement);
              v23 = inserted;
              newString = 0LL;
              if ( !NewElement[0] || !inserted )
                Microsoft::WRL2::FailFast::Unexpected(0LL);
              if ( v56 == 104 )
              {
                v41 = v59;
                if ( !v59 )
                {
LABEL_32:
                  v28 = v57[1];
                  if ( v57[1] )
                  {
                    v57[1] = 0LL;
                    (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v28 + 16LL))(v28);
                  }
                  v29 = v57[0];
                  if ( v57[0] )
                  {
                    v57[0] = 0LL;
                    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v29);
                  }
                  goto LABEL_36;
                }
                v42 = 24LL;
              }
              else
              {
                if ( v56 != 265 )
                  goto LABEL_32;
                v41 = v59;
                if ( !v59 )
                  goto LABEL_32;
                v42 = 64LL;
              }
              operator delete(v41, v42);
              v59 = 0LL;
              goto LABEL_32;
            }
            v40 = 64LL;
          }
          operator delete(v39, v40);
          v54 = 0LL;
          goto LABEL_22;
        }
        if ( v21 )
          goto LABEL_20;
        v36 = 1223LL;
LABEL_64:
        v9 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v36,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionanimation.cpp",
          (const char *)0x80070057LL);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xEE,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionanimation.cpp",
          (const char *)0x80070057LL);
LABEL_65:
        v37 = 1743;
        v38 = v9;
LABEL_87:
        DoStackCaptureDirect(v38, v37);
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(&v49);
LABEL_51:
        Microsoft::WRL2::ContextSession::EndApiEntry(v3);
        return (unsigned int)v9;
      }
LABEL_66:
      v20 = 1;
      goto LABEL_17;
    }
    v14 = *v11;
    v13 = 1;
    LOWORD(v14) = v14 - 65;
    if ( (unsigned __int16)v14 <= 0x39u )
    {
      v15 = 0x3FFFFFF43FFFFFFLL;
      if ( _bittest64(&v15, v14) )
      {
        v16 = 1LL;
        if ( v12 <= 1 )
          goto LABEL_13;
        v17 = 0x87FFFFFE03FFLL;
        while ( 1 )
        {
          v18 = v11[v16];
          if ( (unsigned __int16)(v18 - 97) > 0x19u )
          {
            LOWORD(v18) = v18 - 48;
            if ( (unsigned __int16)v18 > 0x2Fu || !_bittest64(&v17, v18) )
              break;
          }
          if ( ++v16 >= v12 )
            goto LABEL_13;
        }
      }
    }
    v13 = 0;
LABEL_13:
    if ( v13 )
      goto LABEL_14;
    goto LABEL_62;
  }
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return 2147483667LL;
}
