/*
 * XREFs of sub_14065F3BC @ 0x14065F3BC
 * Callers:
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_14065F5D4 @ 0x14065F5D4 (sub_14065F5D4.c)
 *     sub_14065F700 @ 0x14065F700 (sub_14065F700.c)
 *     sub_14065FC74 @ 0x14065FC74 (sub_14065FC74.c)
 *     sub_1406BACAC @ 0x1406BACAC (sub_1406BACAC.c)
 *     sub_14077FAC0 @ 0x14077FAC0 (sub_14077FAC0.c)
 *     sub_140789040 @ 0x140789040 (sub_140789040.c)
 *     sub_14078A1A8 @ 0x14078A1A8 (sub_14078A1A8.c)
 *     sub_14078A470 @ 0x14078A470 (sub_14078A470.c)
 *     sub_14078A584 @ 0x14078A584 (sub_14078A584.c)
 *     sub_14078A600 @ 0x14078A600 (sub_14078A600.c)
 */

__int64 __fastcall sub_14065F3BC(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  int v6; // esi
  int v9; // r13d
  NTSTATUS inited; // ebx
  const WCHAR *v11; // r15
  int v12; // r14d
  int v13; // r14d
  int v14; // r8d
  int v15; // edx
  NTSTATUS v16; // eax
  int v18; // r8d
  int v19; // r8d
  int v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // edx
  int v24; // [rsp+48h] [rbp-29h] BYREF
  int v25; // [rsp+4Ch] [rbp-25h] BYREF
  int v26; // [rsp+50h] [rbp-21h] BYREF
  int v27; // [rsp+54h] [rbp-1Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-19h] BYREF
  __int128 v29; // [rsp+68h] [rbp-9h] BYREF
  PCWSTR SourceString[2]; // [rsp+78h] [rbp+7h]
  __int64 v31; // [rsp+88h] [rbp+17h]

  v6 = 0;
  v31 = 0LL;
  v24 = 0;
  v25 = 0;
  *a6 = 0;
  v9 = 0;
  DestinationString = 0LL;
  v27 = 0;
  v29 = 0LL;
  v26 = 0;
  *(_OWORD *)SourceString = 0LL;
  inited = sub_14078A1A8(a1, a2, a5, &v29);
  if ( inited >= 0 )
  {
    v11 = SourceString[0];
    if ( !SourceString[0] || DWORD2(v29) != 1 || !a3 || a4 < 8 )
    {
      inited = -1073741811;
      goto LABEL_24;
    }
    v12 = HIDWORD(SourceString[1]);
    if ( HIDWORD(SourceString[1]) == 1 )
    {
      v6 = DWORD1(v29);
      if ( (unsigned int)(DWORD1(v29) - 1) > 5 )
        goto LABEL_30;
    }
    else
    {
      if ( HIDWORD(SourceString[1]) != 2 )
        goto LABEL_30;
      v9 = DWORD1(v29);
      if ( (unsigned int)(DWORD1(v29) - 1) > 1 )
        inited = -1073741811;
      if ( inited < 0 )
        goto LABEL_24;
    }
    inited = sub_14077FAC0((unsigned int)(HIDWORD(SourceString[1]) - 1), SourceString[0]);
    if ( inited >= 0 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 != 1 )
          goto LABEL_30;
        if ( (unsigned __int8)sub_14078A600(32LL) && (unsigned __int8)sub_14065FC74(10LL) )
        {
          inited = RtlInitUnicodeStringEx(&DestinationString, v11);
          if ( inited < 0 )
            goto LABEL_24;
          v16 = sub_14065F5D4((unsigned int)&DestinationString, 9, v18, v9 != 2, 0LL);
          goto LABEL_23;
        }
        goto LABEL_38;
      }
      if ( v6 <= 0 )
        goto LABEL_30;
      if ( v6 <= 2 )
      {
        if ( (unsigned __int8)sub_14078A600(32LL) && (unsigned __int8)sub_14065FC74(10LL) )
        {
          if ( !(unsigned __int8)sub_140789040(v11) )
          {
            v24 = sub_14078A470(qword_140D00AC0, (_DWORD)v11, 0, (unsigned int)&v25, (__int64)&v27, (__int64)&v26);
            if ( v24 >= 0 )
            {
              if ( (v25 & 8) != 0 )
                goto LABEL_24;
              if ( (v25 & 0x400) != 0 )
              {
                inited = sub_14065F700(v11);
                if ( inited < 0 )
                  goto LABEL_24;
              }
            }
            inited = RtlInitUnicodeStringEx(&DestinationString, v11);
            if ( inited < 0 )
              goto LABEL_24;
            v15 = 16;
            if ( v6 != 1 )
              v15 = 12;
            v16 = sub_14065F5D4((unsigned int)&DestinationString, v15, v14, 1, 0LL);
LABEL_23:
            inited = v16;
            goto LABEL_24;
          }
LABEL_30:
          inited = -1073741811;
          goto LABEL_24;
        }
LABEL_38:
        inited = -1073741790;
        goto LABEL_24;
      }
      if ( v6 > 6 )
        goto LABEL_30;
      if ( !(unsigned __int8)sub_14078A600(2LL) || !(unsigned __int8)sub_14065FC74(10LL) )
        goto LABEL_38;
      inited = RtlInitUnicodeStringEx(&DestinationString, v11);
      if ( inited >= 0 )
      {
        v20 = v6 - 3;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              if ( v22 != 1 )
              {
                inited = -1073741811;
                v24 = -1073741811;
                goto LABEL_24;
              }
              v23 = 24;
            }
            else
            {
              v23 = 23;
            }
          }
          else
          {
            v23 = 22;
          }
        }
        else
        {
          v23 = 21;
        }
        inited = sub_14065F5D4((unsigned int)&DestinationString, v23, v19, 1, (__int64)&v24);
        if ( inited >= 0 )
          inited = v24;
      }
    }
LABEL_24:
    inited = sub_14078A584((unsigned int)inited, (unsigned int)v31, a3, a4, a6);
  }
  sub_1406BACAC(&v29);
  return (unsigned int)inited;
}
