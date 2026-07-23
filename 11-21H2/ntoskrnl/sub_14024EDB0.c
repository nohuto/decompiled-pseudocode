/*
 * XREFs of sub_14024EDB0 @ 0x14024EDB0
 * Callers:
 *     sub_14042CF40 @ 0x14042CF40 (sub_14042CF40.c)
 *     sub_140430F00 @ 0x140430F00 (sub_140430F00.c)
 * Callees:
 *     sub_14024EF40 @ 0x14024EF40 (sub_14024EF40.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14024EDB0(ULONG_PTR BugCheckParameter4, char a2)
{
  ULONG_PTR v3; // r11
  unsigned int v4; // r10d
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  struct _KPRCB *CurrentPrcb; // r9
  __int64 result; // rax
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // r8
  char *v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax

  v3 = BugCheckParameter4;
  v4 = 0;
  if ( (*(_BYTE *)(BugCheckParameter4 + 368) & 1) == 0 )
  {
    if ( (unsigned int)sub_14024EF40(3LL, *(_QWORD *)(BugCheckParameter4 + 384)) )
      _InterlockedAdd(&dword_140C2A700, 1u);
    if ( (unsigned int)sub_14024EF40(2LL, v5) )
    {
      v4 |= 2u;
      _InterlockedAdd(&dword_140C2A704, 1u);
    }
    v6 = *(_QWORD *)(v3 + 360);
    if ( v6 >= (unsigned __int64)"ZYXj" && v6 < (unsigned __int64)&loc_14042065D )
    {
      v4 |= 4u;
      _InterlockedAdd(&dword_140C2A708, 1u);
    }
    if ( v6 >= (unsigned __int64)"ZYXj" && v6 < (unsigned __int64)algn_1404206A4 )
    {
      v4 |= 4u;
      _InterlockedAdd(&dword_140C2A708, 1u);
    }
    if ( byte_140E01840 )
    {
      if ( v6 >= (unsigned __int64)"ZYXj" && v6 < (unsigned __int64)&loc_140AB6D50 )
      {
        v4 |= 4u;
        _InterlockedAdd(&dword_140C2A70C, 1u);
      }
      if ( byte_140E01840 && v6 >= (unsigned __int64)"ZYXj" && v6 < (unsigned __int64)&locret_140AB6D97 )
      {
        v4 |= 4u;
        _InterlockedAdd(&dword_140C2A70C, 1u);
      }
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  result = v4 & 1;
  if ( a2 || (v4 & 1) != 0 )
  {
    _InterlockedAdd(&dword_140C2A718, 1u);
    if ( (v4 & 1) != 0 )
      _InterlockedAdd(&dword_140C2A720, 1u);
    v9 = 1;
  }
  else
  {
    _InterlockedAdd(&dword_140C2A71C, 1u);
    v9 = 0;
  }
  if ( byte_140E01840 )
  {
    v10 = *((_QWORD *)CurrentPrcb - 47);
    if ( a2 )
    {
      v11 = *(_QWORD *)(v10 + 52);
      goto LABEL_19;
    }
    v11 = *(_QWORD *)(v10 + 44);
  }
  else
  {
    v11 = 0LL;
    if ( a2 )
    {
LABEL_19:
      if ( (v4 & 1) != 0 )
        KeBugCheckEx(0x111u, v4, *(_QWORD *)(v3 + 384), *(_QWORD *)(v3 + 360), v3);
      goto LABEL_20;
    }
  }
  v12 = (char *)CurrentPrcb + 38480;
  if ( !v9 )
LABEL_20:
    v12 = (char *)CurrentPrcb + 38400;
  if ( (v4 & 4) != 0 )
  {
    _InterlockedAdd(&dword_140C2A724, 1u);
    v13 = *((_QWORD *)v12 + 8);
    if ( byte_140E01840 )
    {
      *(_QWORD *)(v11 + 16) = v13;
      *(_QWORD *)(v11 + 24) = *((_QWORD *)v12 + 9);
      if ( (v12[72] & 3) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)CurrentPrcb + 1) + 544LL) + 912LL) != 1 )
      {
        _InterlockedAdd(&dword_140C2A728, 1u);
        _interlockedbittestandreset((volatile signed __int32 *)CurrentPrcb + 10150, 0);
        v14 = __readcr4();
        if ( (v14 & 0x20080) != 0 )
        {
          __writecr4(v14 ^ 0x80);
          __writecr4(v14);
        }
        else
        {
          v15 = __readcr3();
          __writecr3(v15);
        }
      }
    }
    else
    {
      *(_QWORD *)(v3 + 104) = v13;
    }
    *(_OWORD *)(v3 + 360) = *(_OWORD *)v12;
    *(_OWORD *)(v3 + 376) = *((_OWORD *)v12 + 1);
    *(_QWORD *)(v3 + 392) = *((_QWORD *)v12 + 4);
    *(_QWORD *)(v3 + 48) = *((_QWORD *)v12 + 5);
    *(_QWORD *)(v3 + 56) = *((_QWORD *)v12 + 6);
    result = *((_QWORD *)v12 + 7);
    *(_QWORD *)(v3 + 64) = result;
    _InterlockedAdd(&dword_140C2A714, 1u);
    *((_WORD *)v12 + 4) = 0;
  }
  if ( !a2 )
  {
    _InterlockedAdd(&dword_140C2A710, 1u);
    *(_OWORD *)v12 = *(_OWORD *)(v3 + 360);
    *((_OWORD *)v12 + 1) = *(_OWORD *)(v3 + 376);
    *((_QWORD *)v12 + 4) = *(_QWORD *)(v3 + 392);
    *((_QWORD *)v12 + 5) = *(_QWORD *)(v3 + 48);
    *((_QWORD *)v12 + 6) = *(_QWORD *)(v3 + 56);
    *((_QWORD *)v12 + 7) = *(_QWORD *)(v3 + 64);
    result = *(_QWORD *)(v3 + 104);
    *((_QWORD *)v12 + 8) = result;
    if ( byte_140E01840 )
    {
      *((_QWORD *)v12 + 8) = *(_QWORD *)(v11 + 16);
      result = *(_QWORD *)(v11 + 24);
      *((_QWORD *)v12 + 9) = result;
    }
  }
  return result;
}
