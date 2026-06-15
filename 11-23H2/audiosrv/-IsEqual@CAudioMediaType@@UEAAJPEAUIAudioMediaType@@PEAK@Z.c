/*
 * XREFs of ?IsEqual@CAudioMediaType@@UEAAJPEAUIAudioMediaType@@PEAK@Z @ 0x1800692B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18006A80D (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioMediaType::IsEqual(struct IAudioMediaType *this, struct IAudioMediaType *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  struct IAudioMediaTypeVtbl *lpVtbl; // rcx
  __int64 v8; // r10
  __int16 v9; // r12
  HRESULT (__stdcall *QueryInterface)(IAudioMediaType *, const IID *const, void **); // r15
  __int16 v11; // r9
  int v12; // r8d
  __int16 v13; // r11
  __int16 v14; // ax
  __int16 v15; // dx
  __int16 Release; // r8
  unsigned int v17; // esi
  int v18; // esi
  int v19; // ecx
  int v20; // edx
  struct IAudioMediaTypeVtbl *v21; // r9
  __int128 v23; // [rsp+28h] [rbp-38h]
  __int128 v24; // [rsp+40h] [rbp-20h]

  v3 = 0;
  if ( a2 && a3 )
  {
    *a3 = 0;
    if ( this == a2 )
    {
      *a3 = 14;
      return v3;
    }
    v6 = ((__int64 (__fastcall *)(struct IAudioMediaType *))a2->lpVtbl->GetAudioFormat)(a2);
    lpVtbl = this[2].lpVtbl;
    v8 = v6;
    if ( !v6 )
    {
      if ( lpVtbl )
        return 1;
      else
        *a3 |= 0xEu;
      return v3;
    }
    if ( lpVtbl )
    {
      v9 = *(_WORD *)(v6 + 16);
      QueryInterface = lpVtbl->QueryInterface;
      v23 = *(_OWORD *)&lpVtbl->QueryInterface;
      v24 = *(_OWORD *)v6;
      if ( WORD1(*(_OWORD *)&lpVtbl->QueryInterface) )
      {
        v11 = WORD1(*(_OWORD *)v6);
      }
      else
      {
        v11 = 0;
        WORD1(v24) = 0;
        DWORD2(v24) = 0;
        WORD6(v24) = 0;
      }
      if ( (unsigned __int64)lpVtbl->QueryInterface >> 32 )
      {
        v12 = HIDWORD(*(_QWORD *)v6);
      }
      else
      {
        v12 = 0;
        *(_QWORD *)((char *)&v24 + 4) = 0LL;
      }
      if ( HIWORD(v23) )
      {
        v13 = HIWORD(*(_OWORD *)v6);
      }
      else
      {
        v13 = 0;
        HIDWORD(v24) = 0;
      }
      v14 = *(_OWORD *)&lpVtbl->QueryInterface;
      if ( (_WORD)v23 )
      {
        v15 = v24;
      }
      else
      {
        v15 = 0;
        LOWORD(v24) = 0;
      }
      if ( !v11 )
      {
        WORD1(v23) = 0;
        QueryInterface = (HRESULT (__stdcall *)(IAudioMediaType *, const IID *const, void **))v23;
        DWORD2(v23) = 0;
        WORD6(v23) = 0;
      }
      if ( !v12 )
      {
        *(_QWORD *)((char *)&v23 + 4) = 0LL;
        QueryInterface = (HRESULT (__stdcall *)(IAudioMediaType *, const IID *const, void **))(unsigned int)v23;
      }
      if ( !v13 )
        HIDWORD(v23) = 0;
      if ( !v15 )
      {
        LOWORD(v23) = 0;
        v14 = 0;
        QueryInterface = (HRESULT (__stdcall *)(IAudioMediaType *, const IID *const, void **))v23;
      }
      if ( v15 == 1 )
        v9 = 0;
      Release = 0;
      if ( v14 != 1 )
        Release = (__int16)lpVtbl->Release;
      if ( v15 != v14
        || LOWORD(lpVtbl->QueryInterface) == 0xFFFE
        && (*(HRESULT (__stdcall **)(IAudioMediaType *, BOOL *))(v8 + 24) != lpVtbl->IsCompressedFormat
         || *(HRESULT (__stdcall **)(IAudioMediaType *, IAudioMediaType *, DWORD *))(v8 + 32) != lpVtbl->IsEqual) )
      {
        return 1;
      }
      if ( v9 != Release )
        return 1;
      v17 = *a3 | 2;
      *a3 = v17;
      if ( __PAIR128__(*((unsigned __int64 *)&v23 + 1), (unsigned __int64)QueryInterface) != v24 || Release != v9 )
        return 1;
      v18 = v17 | 4;
      v19 = 18;
      *a3 = v18;
      v20 = 18;
      v21 = this[2].lpVtbl;
      if ( LOWORD(v21->QueryInterface) != 1 )
        v20 = LOWORD(v21->Release) + 18;
      if ( *(_WORD *)v8 != 1 )
        v19 = *(unsigned __int16 *)(v8 + 16) + 18;
      if ( v20 != v19 )
        return ((unsigned __int8)~*(_BYTE *)a3 >> 3) & 1;
      if ( memcmp_0((char *)&v21->Release + 2, (const void *)(v8 + 18), *(unsigned __int16 *)(v8 + 16)) )
        return 1;
      *a3 = v18 | 8;
    }
    return ((unsigned __int8)~*(_BYTE *)a3 >> 3) & 1;
  }
  return 2147942487LL;
}
