/*
 * XREFs of LdrpResGetResourceDirectory @ 0x180005C20
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x18000555C (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     LdrpSectionTableFromVirtualAddress @ 0x180007F24 (LdrpSectionTableFromVirtualAddress.c)
 *     RtlImageNtHeaderEx @ 0x180024AA0 (RtlImageNtHeaderEx.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     LdrpTraceLoadMUIDll @ 0x1800EC0E8 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResGetResourceDirectory(
        unsigned __int64 a1,
        __int64 a2,
        __int16 a3,
        unsigned __int64 *a4,
        _QWORD *a5)
{
  char v7; // r13
  char v8; // r12
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rsi
  char v12; // r12
  __int64 result; // rax
  __int64 v14; // r10
  __int128 *v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // r14d
  unsigned __int64 v18; // rdx
  int v19; // r12d
  __int64 v20; // r13
  unsigned int *v21; // rax
  unsigned __int64 v22; // r8
  int v23; // eax
  int v24; // ecx
  __int64 v25; // rcx
  unsigned int v26; // [rsp+30h] [rbp-168h]
  int v27; // [rsp+48h] [rbp-150h] BYREF
  const wchar_t *v28; // [rsp+50h] [rbp-148h]
  int v29; // [rsp+58h] [rbp-140h] BYREF
  const wchar_t *v30; // [rsp+60h] [rbp-138h]
  __int128 v31; // [rsp+70h] [rbp-128h]
  __int128 v32; // [rsp+80h] [rbp-118h]
  __int128 v33; // [rsp+90h] [rbp-108h]
  __int128 v34; // [rsp+A0h] [rbp-F8h]
  __int128 v35; // [rsp+B0h] [rbp-E8h]
  __int128 v36; // [rsp+C0h] [rbp-D8h]
  __int128 v37; // [rsp+D0h] [rbp-C8h]
  __int128 v38; // [rsp+E0h] [rbp-B8h]
  __int128 v39; // [rsp+F0h] [rbp-A8h]
  __int128 v40; // [rsp+100h] [rbp-98h]
  __int128 v41; // [rsp+110h] [rbp-88h]
  __int128 v42; // [rsp+120h] [rbp-78h]
  __int128 v43; // [rsp+130h] [rbp-68h]
  __int128 v44; // [rsp+140h] [rbp-58h]
  __int128 v45; // [rsp+150h] [rbp-48h]
  __int64 v46; // [rsp+1A0h] [rbp+8h] BYREF
  __int64 v47; // [rsp+1A8h] [rbp+10h]
  int v48; // [rsp+1B0h] [rbp+18h]
  unsigned __int64 *v49; // [rsp+1B8h] [rbp+20h]

  v49 = a4;
  v47 = a2;
  v7 = 1;
  LOBYTE(v46) = 1;
  v8 = 1;
  v27 = 4456514;
  v28 = L"LdrpResGetResourceDirectory Enter";
  v29 = 4325440;
  v30 = L"LdrpResGetResourceDirectory Exit";
  v9 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v10 = (__int64)NtCurrentPeb()->SharedData + 555;
    v7 = v46;
  }
  else
  {
    v10 = 2147353477LL;
  }
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    v11 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v25 = (__int64)NtCurrentPeb()->SharedData + 554;
      v7 = v46;
    }
    else
    {
      v25 = 2147353476LL;
    }
    LdrpTraceLoadMUIDll(&v27, *(unsigned __int8 *)v25);
  }
  else
  {
    v11 = 2147353476LL;
  }
  if ( !a1 || !v49 || !a5 )
    return 3221225485LL;
  if ( (a1 & 3) != 0 )
  {
    v12 = a1 & 1;
    a1 &= 0xFFFFFFFFFFFFFFFCuLL;
    v8 = v12 ^ 1;
  }
  v48 = a3 & 0x1000;
  result = RtlImageNtHeaderEx(v48 == 0, a1, v47, &v46);
  if ( (int)result >= 0 )
  {
    v14 = v46;
    v15 = (__int128 *)(v46 + 24);
    if ( *(_WORD *)(v46 + 24) == 267 )
    {
      v31 = *v15;
      v32 = *(_OWORD *)(v46 + 40);
      v33 = *(_OWORD *)(v46 + 56);
      v34 = *(_OWORD *)(v46 + 72);
      v35 = *(_OWORD *)(v46 + 88);
      v36 = *(_OWORD *)(v46 + 104);
      v37 = *(_OWORD *)(v46 + 120);
      v38 = *(_OWORD *)(v46 + 136);
      v39 = *(_OWORD *)(v46 + 152);
      v40 = *(_OWORD *)(v46 + 168);
      v41 = *(_OWORD *)(v46 + 184);
      v42 = *(_OWORD *)(v46 + 200);
      v43 = *(_OWORD *)(v46 + 216);
      v44 = *(_OWORD *)(v46 + 232);
    }
    else
    {
      if ( *(_WORD *)v15 != 523 )
      {
        v26 = -1073741701;
        goto LABEL_41;
      }
      v31 = *v15;
      v32 = *(_OWORD *)(v46 + 40);
      v33 = *(_OWORD *)(v46 + 56);
      v34 = *(_OWORD *)(v46 + 72);
      v35 = *(_OWORD *)(v46 + 88);
      v36 = *(_OWORD *)(v46 + 104);
      v37 = *(_OWORD *)(v46 + 120);
      v38 = *(_OWORD *)(v46 + 136);
      v39 = *(_OWORD *)(v46 + 152);
      v40 = *(_OWORD *)(v46 + 168);
      v41 = *(_OWORD *)(v46 + 184);
      v42 = *(_OWORD *)(v46 + 200);
      v43 = *(_OWORD *)(v46 + 216);
      v44 = *(_OWORD *)(v46 + 232);
      v45 = *(_OWORD *)(v46 + 248);
      v7 = 0;
    }
    v16 = HIDWORD(v37);
    if ( v7 )
      v16 = HIDWORD(v36);
    if ( v16 <= 2 )
    {
      v26 = -1073741687;
    }
    else
    {
      v17 = v39;
      if ( v7 )
        v17 = v38;
      if ( v17 )
      {
        if ( v8 || v17 < HIDWORD(v34) )
        {
          v18 = a1 + v17;
          if ( v18 < a1 )
          {
            v26 = -1073741701;
            goto LABEL_41;
          }
          v19 = v48;
          v20 = v47;
        }
        else
        {
          v19 = v48;
          v20 = v47;
          v21 = (unsigned int *)LdrpSectionTableFromVirtualAddress(a1, v47, v46, 0, v17, v48 != 0);
          if ( !v21 )
          {
            v26 = -1073741701;
            goto LABEL_41;
          }
          if ( !v21[4] )
          {
            v26 = -1073741687;
            goto LABEL_41;
          }
          v18 = a1 + v21[5] - (unsigned __int64)v21[3] + v17;
          v14 = v46;
        }
        if ( !v18 )
        {
          v26 = -1073741687;
          goto LABEL_41;
        }
        if ( v19 )
        {
          if ( v18 <= a1 )
            goto LABEL_47;
          v22 = (a1 & 0xFFFFFFFFFFFFFFFCuLL) + v20;
          if ( v18 + 16 > v22 )
            goto LABEL_47;
          v23 = *(unsigned __int16 *)(v18 + 12);
          v24 = *(unsigned __int16 *)(v18 + 14);
          if ( !__PAIR32__(v24, v23) )
          {
            v26 = -1073741686;
            goto LABEL_41;
          }
          if ( v18 + 8LL * (unsigned int)(v23 + v24) > v22 )
          {
LABEL_47:
            v26 = -1073741701;
            goto LABEL_41;
          }
        }
        *v49 = v18;
        *a5 = v14;
        v26 = 0;
      }
      else
      {
        v26 = -1073741687;
      }
    }
LABEL_41:
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v9 & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v11 = (__int64)NtCurrentPeb()->SharedData + 554;
      LdrpTraceLoadMUIDll(&v29, *(unsigned __int8 *)v11);
    }
    return v26;
  }
  return result;
}
