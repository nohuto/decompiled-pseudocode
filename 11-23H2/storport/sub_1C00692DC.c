/*
 * XREFs of sub_1C00692DC @ 0x1C00692DC
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C000E318 @ 0x1C000E318 (sub_1C000E318.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     sub_1C0013F74 @ 0x1C0013F74 (sub_1C0013F74.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0035FBC @ 0x1C0035FBC (sub_1C0035FBC.c)
 */

__int64 __fastcall sub_1C00692DC(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        UCHAR a8,
        int a9,
        __int64 a10)
{
  unsigned int v10; // ebx
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // r13
  __int64 v18; // rdi
  __int64 v19; // r12
  EVENT_DESCRIPTOR v20; // xmm0
  ULONGLONG v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // ecx
  const wchar_t *v25; // rax
  const int *v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  const int *v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  const int *v32; // rax
  int v33; // edi
  NTSTATUS v34; // eax
  unsigned int v36; // [rsp+40h] [rbp-C0h] BYREF
  int v37; // [rsp+44h] [rbp-BCh] BYREF
  __int128 v38; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v40; // [rsp+68h] [rbp-98h] BYREF
  __int128 v41; // [rsp+78h] [rbp-88h] BYREF
  GUID ActivityId; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int *v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  char *v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  char *v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  __int128 *v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+E8h] [rbp-18h]
  __int128 *v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]
  const wchar_t *v54; // [rsp+100h] [rbp+0h]
  int v55; // [rsp+108h] [rbp+8h]
  int v56; // [rsp+10Ch] [rbp+Ch]
  const int *v57; // [rsp+110h] [rbp+10h]
  int v58; // [rsp+118h] [rbp+18h]
  int v59; // [rsp+11Ch] [rbp+1Ch]
  const int *v60; // [rsp+120h] [rbp+20h]
  int v61; // [rsp+128h] [rbp+28h]
  int v62; // [rsp+12Ch] [rbp+2Ch]
  const int *v63; // [rsp+130h] [rbp+30h]
  int v64; // [rsp+138h] [rbp+38h]
  int v65; // [rsp+13Ch] [rbp+3Ch]
  int *v66; // [rsp+140h] [rbp+40h]
  __int64 v67; // [rsp+148h] [rbp+48h]
  int *v68; // [rsp+150h] [rbp+50h]
  __int64 v69; // [rsp+158h] [rbp+58h]
  __int64 v70; // [rsp+160h] [rbp+60h]
  int v71; // [rsp+168h] [rbp+68h]
  int v72; // [rsp+16Ch] [rbp+6Ch]
  int *v73; // [rsp+170h] [rbp+70h]
  __int64 v74; // [rsp+178h] [rbp+78h]
  __int64 v75; // [rsp+180h] [rbp+80h]
  int v76; // [rsp+188h] [rbp+88h]
  int v77; // [rsp+18Ch] [rbp+8Ch]
  int v78; // [rsp+1F8h] [rbp+F8h] BYREF

  v78 = a4;
  v36 = -1;
  v10 = 0;
  EventDescriptor = 0LL;
  v38 = 0LL;
  v13 = *(_OWORD *)(a1 + 5000);
  ActivityId = 0LL;
  v41 = v13;
  v40 = 0LL;
  if ( a2 )
  {
    if ( *(_WORD *)a2 != 1 )
      return (unsigned int)-1056964602;
    if ( *(_DWORD *)(a2 + 4) < 4u )
      return (unsigned int)-1056964602;
    LOWORD(v36) = *(_WORD *)(a2 + 8);
    BYTE2(v36) = *(_BYTE *)(a2 + 10);
    v14 = sub_1C00081BC(a1, v36);
    v15 = v14;
    if ( !v14 )
      return (unsigned int)-1056964602;
    v40 = *(_OWORD *)(v14 + 2024);
    v16 = *(_BYTE *)(v14 + 450) & 1;
  }
  else
  {
    v15 = sub_1C0035FBC(a1);
    v16 = *(unsigned __int8 *)(a1 + 104) >> 7;
  }
  v17 = a5;
  v37 = v16;
  if ( !a5 )
    return (unsigned int)-1073741811;
  v18 = -1LL;
  v19 = -1LL;
  do
    ++v19;
  while ( *(_WORD *)(a5 + 2 * v19) );
  if ( (unsigned int)(v19 - 1) > 0x3F )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    if ( !byte_1C0093BE8 || (byte_1C0093A03 & 0x10) == 0 )
      return v10;
    v20 = (EVENT_DESCRIPTOR)xmmword_1C0088F48;
    goto LABEL_36;
  }
  if ( a3 != 1 )
  {
    if ( a3 == 2 )
    {
      if ( a7 == 4 )
      {
        if ( (byte_1C0093A06 & 0x20) != 0 )
        {
          v20 = (EVENT_DESCRIPTOR)xmmword_1C00891D0;
          goto LABEL_36;
        }
      }
      else
      {
        if ( a7 != 3 )
        {
          if ( (unsigned int)(a7 - 1) > 1 )
            return v10;
          if ( (byte_1C0093A05 & 0x20) == 0 )
            goto LABEL_37;
          v20 = (EVENT_DESCRIPTOR)xmmword_1C00895B0;
          goto LABEL_36;
        }
        if ( (byte_1C0093A05 & 0x40) != 0 )
        {
          v20 = (EVENT_DESCRIPTOR)xmmword_1C0089148;
          goto LABEL_36;
        }
      }
      goto LABEL_37;
    }
    return (unsigned int)-1056964602;
  }
  if ( a7 == 4 )
  {
    if ( (byte_1C0093A05 & 1) != 0 )
    {
      v20 = (EVENT_DESCRIPTOR)xmmword_1C0088E38;
LABEL_36:
      EventDescriptor = v20;
    }
  }
  else
  {
    if ( a7 != 3 )
    {
      if ( (unsigned int)(a7 - 1) > 1 )
        return v10;
      if ( (byte_1C0093A04 & 0x20) == 0 )
        goto LABEL_37;
      v20 = (EVENT_DESCRIPTOR)xmmword_1C0089058;
      goto LABEL_36;
    }
    if ( (byte_1C0093A05 & 8) != 0 )
    {
      v20 = (EVENT_DESCRIPTOR)xmmword_1C0089198;
      goto LABEL_36;
    }
  }
LABEL_37:
  EventDescriptor.Level = a7;
  EventDescriptor.Opcode = a8;
  v21 = sub_1C0013F74(a6, EventDescriptor.Keyword);
  v22 = *(_QWORD *)(a1 + 16);
  EventDescriptor.Keyword = v21;
  sub_1C0010EE0(v22, (__int64)&v38);
  v44 = &v36;
  *(_QWORD *)&UserData.Size = 4LL;
  v46 = (char *)&v36 + 1;
  v48 = (char *)&v36 + 2;
  v50 = &v40;
  v52 = &v41;
  UserData.Ptr = a1 + 56;
  v45 = 1LL;
  v47 = 1LL;
  v49 = 1LL;
  v51 = 16LL;
  v53 = 16LL;
  if ( *((_QWORD *)&v38 + 1) )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *(_WORD *)(*((_QWORD *)&v38 + 1) + 2 * v23) );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v24 = 10;
  }
  v55 = v24;
  v25 = L"NULL";
  v56 = 0;
  if ( *((_QWORD *)&v38 + 1) )
    v25 = (const wchar_t *)*((_QWORD *)&v38 + 1);
  v26 = (const int *)(v15 + 160);
  v54 = v25;
  if ( v15 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( *((_BYTE *)v26 + v27) );
    v28 = v27 + 1;
  }
  else
  {
    v28 = 1;
    v26 = &dword_1C0082784;
  }
  v57 = v26;
  v29 = (const int *)(v15 + 169);
  v58 = v28;
  v59 = 0;
  if ( v15 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( *((_BYTE *)v29 + v30) );
    v31 = v30 + 1;
  }
  else
  {
    v31 = 1;
    v29 = &dword_1C0082784;
  }
  v61 = v31;
  v32 = (const int *)(v15 + 186);
  v60 = v29;
  v62 = 0;
  if ( v15 )
  {
    do
      ++v18;
    while ( *((_BYTE *)v32 + v18) );
    v33 = v18 + 1;
  }
  else
  {
    v33 = 1;
    v32 = &dword_1C0082784;
  }
  v63 = v32;
  v64 = v33;
  v66 = &v37;
  v65 = 0;
  v68 = &a9;
  v70 = a10;
  v71 = a9;
  v73 = &v78;
  v76 = 2 * v19 + 2;
  v67 = 4LL;
  v69 = 4LL;
  v72 = 0;
  v74 = 4LL;
  v75 = v17;
  v77 = 0;
  v34 = EtwWriteEx(RegHandle, &EventDescriptor, 0LL, 1u, &ActivityId, 0LL, 0xFu, &UserData);
  return (unsigned int)sub_1C000E318(v34);
}
