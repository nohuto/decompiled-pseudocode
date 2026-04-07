/*
 * XREFs of ?_AddPrimitive@CAnimationResource@@IEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x1800ABF80
 * Callers:
 *     ?AddCubic@CAnimationResource@@UEAAJNMMMM@Z @ 0x1800ABAF0 (-AddCubic@CAnimationResource@@UEAAJNMMMM@Z.c)
 *     ?AddRepeat@CAnimationResource@@UEAAJNN@Z @ 0x1800ABBB0 (-AddRepeat@CAnimationResource@@UEAAJNN@Z.c)
 *     ?AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z @ 0x1800ABC70 (-AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z.c)
 *     ?End@CAnimationResource@@UEAAJNM@Z @ 0x1800ABD60 (-End@CAnimationResource@@UEAAJNM@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimationResource::_AddPrimitive(CAnimationResource *this, const struct DwmAnimationPrimitive *a2)
{
  int v2; // r14d
  unsigned int v3; // ebx
  char v6; // r15
  _DWORD *v7; // rsi
  _QWORD *v8; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm1
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // ebp
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // eax

  v2 = *((_DWORD *)this + 12);
  v3 = 0;
  v6 = 0;
  if ( *((_BYTE *)this + 64) )
    return (unsigned int)-2147024809;
  v7 = (_DWORD *)((char *)this + 24);
  v8 = (_QWORD *)((char *)a2 + 8);
  if ( v2 )
  {
    if ( *v8 < *(_QWORD *)(32LL * (unsigned int)(*((_DWORD *)this + 12) - 1) + *((_QWORD *)this + 3) + 8) )
      return (unsigned int)-2147024809;
  }
  if ( *(_DWORD *)a2 == 3 )
  {
    if ( !v2 || *v8 == *(_QWORD *)(*(_QWORD *)v7 + 8LL) )
      return (unsigned int)-2147024809;
  }
  else if ( !v2 )
  {
    goto LABEL_12;
  }
  if ( *(_QWORD *)(32LL * (unsigned int)(*((_DWORD *)this + 12) - 1) + *((_QWORD *)this + 3) + 8) == *v8 )
    v6 = 1;
LABEL_12:
  if ( *(_DWORD *)a2 == 1 || *(_DWORD *)a2 == 2 )
  {
    if ( _finite(*((float *)a2 + 4))
      && _finite(*((float *)a2 + 5))
      && _finite(*((float *)a2 + 6))
      && _finite(*((float *)a2 + 7)) )
    {
      goto LABEL_25;
    }
    return (unsigned int)-2147024809;
  }
  if ( *(_DWORD *)a2 == 3 )
  {
    if ( *((_QWORD *)a2 + 2) <= *v8 - *(_QWORD *)(*(_QWORD *)v7 + 8LL) )
      goto LABEL_25;
    return (unsigned int)-2147024809;
  }
  if ( *(_DWORD *)a2 != 4 )
    return (unsigned int)-2147467259;
  if ( !_finite(*((float *)a2 + 4)) )
    return (unsigned int)-2147024809;
  *((_BYTE *)this + 64) = 1;
LABEL_25:
  if ( v6 )
  {
    v10 = *(_QWORD *)v7;
    v11 = 32LL * (unsigned int)(v2 - 1);
    v12 = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v11 + v10) = *(_OWORD *)a2;
    *(_OWORD *)(v11 + v10 + 16) = v12;
  }
  else
  {
    v13 = v7[6];
    v14 = v13 + 1;
    if ( v13 + 1 >= v13 )
    {
      v15 = 0;
      if ( v14 > v7[5] )
      {
        v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v7, 32, 1, a2);
        v15 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0xC0u);
      }
      else
      {
        v16 = *(_QWORD *)v7;
        v17 = 32LL * (unsigned int)v7[6];
        *(_OWORD *)(v17 + v16) = *(_OWORD *)a2;
        *(_OWORD *)(v17 + v16 + 16) = *((_OWORD *)a2 + 1);
        v7[6] = v14;
      }
    }
    else
    {
      v15 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    return v15;
  }
  return v3;
}
