/*
 * XREFs of ?QueryService@CImmersiveShellComponent@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180132D30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveShellComponent::QueryService(
        CImmersiveShellComponent *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  char *v8; // rsi
  __int64 result; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  _QWORD *i; // rcx
  __int64 v13; // rax
  char *v14; // rbx
  unsigned int v15; // ebx
  __int64 v16[5]; // [rsp+30h] [rbp-28h] BYREF
  char *v17; // [rsp+60h] [rbp+8h] BYREF

  v8 = (char *)this - 8;
  result = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 1) + 72LL))((char *)this - 8);
  if ( (int)result < 0 )
  {
    v10 = 0LL;
    v11 = *((_QWORD *)this + 3);
    if ( v11 )
    {
      for ( i = (_QWORD *)*((_QWORD *)this + 2); ; i += 4 )
      {
        v13 = *(_QWORD *)&a2->Data1 - *i;
        if ( *(_QWORD *)&a2->Data1 == *i )
          v13 = *(_QWORD *)a2->Data4 - i[1];
        if ( !v13 )
          break;
        if ( ++v10 >= v11 )
          return (*(__int64 (__fastcall **)(char *, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v8 + 96LL))(
                   v8,
                   a2,
                   a3,
                   a4);
      }
      v14 = *(char **)(32 * v10 + *((_QWORD *)this + 2) + 16);
      v17 = v14;
      if ( v14 )
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)v14 + 8LL))(v14);
      }
      else if ( v8 )
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 8LL))(v8);
        v16[0] = 0LL;
        v14 = v8;
        v17 = v8;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v16);
      }
      v15 = (**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v14)(v14, a3, a4);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
      return v15;
    }
    else
    {
      return (*(__int64 (__fastcall **)(char *, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v8 + 96LL))(
               v8,
               a2,
               a3,
               a4);
    }
  }
  return result;
}
