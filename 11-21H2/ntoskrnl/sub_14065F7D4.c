/*
 * XREFs of sub_14065F7D4 @ 0x14065F7D4
 * Callers:
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 * Callees:
 *     RtlGetActiveConsoleId @ 0x1402DEB60 (RtlGetActiveConsoleId.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_140561048 @ 0x140561048 (sub_140561048.c)
 *     sub_1405643B8 @ 0x1405643B8 (sub_1405643B8.c)
 *     sub_14065FA0C @ 0x14065FA0C (sub_14065FA0C.c)
 *     sub_14065FC74 @ 0x14065FC74 (sub_14065FC74.c)
 *     sub_1406BACAC @ 0x1406BACAC (sub_1406BACAC.c)
 *     sub_14077C780 @ 0x14077C780 (sub_14077C780.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_14077FAC0 @ 0x14077FAC0 (sub_14077FAC0.c)
 *     sub_140789040 @ 0x140789040 (sub_140789040.c)
 *     sub_14078A1A8 @ 0x14078A1A8 (sub_14078A1A8.c)
 *     sub_14078A470 @ 0x14078A470 (sub_14078A470.c)
 *     sub_14078A600 @ 0x14078A600 (sub_14078A600.c)
 *     sub_140946F98 @ 0x140946F98 (sub_140946F98.c)
 *     sub_140949890 @ 0x140949890 (sub_140949890.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14065F7D4(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  const WCHAR *v7; // r13
  int v8; // r12d
  unsigned int v9; // r14d
  _WORD *v10; // r15
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  int v14; // edi
  NTSTATUS inited; // ebx
  unsigned int v16; // eax
  unsigned int v17; // esi
  _WORD *Pool2; // rax
  int v19; // edi
  int v20; // eax
  int v22; // edi
  unsigned int v23; // r8d
  char v24[4]; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v25; // [rsp+5Ch] [rbp-45h] BYREF
  unsigned int v26; // [rsp+60h] [rbp-41h] BYREF
  int v27; // [rsp+64h] [rbp-3Dh] BYREF
  int v28; // [rsp+68h] [rbp-39h] BYREF
  int v29; // [rsp+6Ch] [rbp-35h] BYREF
  ULONG SessionId; // [rsp+70h] [rbp-31h] BYREF
  int v31; // [rsp+74h] [rbp-2Dh] BYREF
  int v32; // [rsp+78h] [rbp-29h] BYREF
  int v33; // [rsp+7Ch] [rbp-25h] BYREF
  __int128 v34; // [rsp+80h] [rbp-21h] BYREF
  PCWSTR SourceString[2]; // [rsp+90h] [rbp-11h]
  __int64 v36; // [rsp+A0h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp+7h] BYREF

  v27 = 0;
  v32 = 0;
  v36 = 0LL;
  DestinationString = 0LL;
  v31 = 0;
  v7 = 0LL;
  v34 = 0LL;
  *a6 = 0;
  v8 = 0;
  *(_OWORD *)SourceString = 0LL;
  v29 = 0;
  v9 = 0;
  v28 = 0;
  v10 = 0LL;
  v33 = 0;
  v24[0] = 0;
  SessionId = 0;
  v25 = 0;
  v26 = 0;
  v12 = sub_14078A1A8(a1, a2, a5, &v34);
  if ( v12 < 0 )
    goto LABEL_25;
  v7 = SourceString[0];
  v14 = HIDWORD(SourceString[1]);
  if ( (byte_140C0DD4B & 4) != 0 )
    sub_1405643B8(v11, (const EVENT_DESCRIPTOR *)qword_14003B2C0, v13, SHIDWORD(SourceString[1]), SourceString[0]);
  if ( !v7 || DWORD2(v34) != 1 || !a3 || a4 < 0x14 )
    goto LABEL_62;
  inited = sub_14077FAC0(v11, v7);
  if ( inited < 0 )
  {
LABEL_58:
    if ( inited != -2147483608 )
      goto LABEL_22;
    v23 = v25;
    goto LABEL_60;
  }
  if ( (unsigned __int8)sub_140789040(v7) )
  {
    inited = -1073741773;
    goto LABEL_22;
  }
  v16 = a4 - 20;
  v17 = 0;
  if ( v16 >= 2 )
    v17 = v16;
  if ( v17 )
  {
    Pool2 = (_WORD *)ExAllocatePool2(256LL, v17, 879783504LL);
    v10 = Pool2;
    if ( !Pool2 )
    {
      inited = -1073741670;
      goto LABEL_22;
    }
    *Pool2 = 0;
  }
  v19 = v14 - 1;
  if ( !v19 )
  {
    if ( (unsigned __int8)sub_14078A600(32LL) && (unsigned __int8)sub_14065FC74(10LL) )
    {
      if ( (DWORD1(v34) & 0xFFFFFFFE) == 0 )
      {
        v8 = BYTE4(v34) & 1;
        goto LABEL_20;
      }
LABEL_40:
      inited = -1073741811;
      goto LABEL_22;
    }
LABEL_46:
    inited = -1073741790;
    goto LABEL_22;
  }
  v22 = v19 - 1;
  if ( !v22 )
  {
    v28 = 4;
    inited = sub_14077CD90(qword_140D00AC0, (_DWORD)v7, 0, 16, (__int64)&v33, (__int64)&v29, (__int64)&v28, 0);
    if ( inited >= 0 )
    {
      v8 = 8;
      if ( (v29 & 8) != 0 )
      {
        if ( !(unsigned __int8)sub_14078A600(4LL) || !(unsigned __int8)sub_14065FC74(25LL) )
          goto LABEL_46;
      }
      else
      {
        inited = sub_140946F98(&SessionId);
        if ( inited < 0 || SessionId != RtlGetActiveConsoleId() )
        {
          inited = sub_140949890(v24);
          if ( inited < 0 || !v24[0] )
          {
            if ( !(unsigned __int8)sub_14078A600(4LL) || !(unsigned __int8)sub_14065FC74(10LL) )
              goto LABEL_46;
            inited = 0;
          }
        }
      }
      if ( DWORD1(v34) )
        goto LABEL_40;
    }
    v9 = v17;
    if ( inited < 0 )
      goto LABEL_58;
    goto LABEL_20;
  }
  if ( v22 != 1 )
  {
LABEL_62:
    inited = -1073741811;
    goto LABEL_22;
  }
  if ( !(unsigned __int8)sub_14078A600(4LL) || !(unsigned __int8)sub_14065FC74(10LL) )
    goto LABEL_46;
  if ( DWORD1(v34) )
    goto LABEL_40;
  v8 = 2;
  if ( (int)sub_14078A470(qword_140D00AC0, (_DWORD)v7, 0, (unsigned int)&v27, (__int64)&v32, (__int64)&v31) < 0 )
  {
    inited = -1073741810;
    goto LABEL_22;
  }
  if ( (v27 & 0x2000) == 0 )
  {
    inited = -1073741808;
    goto LABEL_22;
  }
LABEL_20:
  inited = RtlInitUnicodeStringEx(&DestinationString, v7);
  v9 = v17;
  if ( inited < 0 )
    goto LABEL_58;
  v25 = v17;
  inited = sub_14065FA0C((unsigned int)&DestinationString, (unsigned int)&v26, (_DWORD)v10, (unsigned int)&v25, v8, 0);
  if ( inited != -2147483608 )
  {
LABEL_22:
    v20 = sub_14077C780((unsigned int)inited, v25, v26, 0LL, 0, v36, a3, a4, a6);
    goto LABEL_23;
  }
  v23 = v25;
  if ( v10 )
    v10[((unsigned __int64)v17 >> 1) - 1] = 0;
LABEL_60:
  if ( v23 > v9 )
    goto LABEL_22;
  v20 = sub_14077C780(2147483688LL, v25, v26, v10, v23, v36, a3, a4, a6);
LABEL_23:
  v12 = v20;
  if ( v10 )
    ExFreePoolWithTag(v10, 0x34706E50u);
LABEL_25:
  if ( (byte_140C0DD4B & 4) != 0 )
    sub_140561048(v11, (const EVENT_DESCRIPTOR *)qword_14003B1E0, v13, v7);
  sub_1406BACAC(&v34);
  return (unsigned int)v12;
}
