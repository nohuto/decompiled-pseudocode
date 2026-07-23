/*
 * XREFs of ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x14077E168
 * Callers:
 *     sub_140780EF0 @ 0x140780EF0 (sub_140780EF0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     EtwActivityIdControl @ 0x1402DFD70 (EtwActivityIdControl.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406CC8F8 @ 0x1406CC8F8 (sub_1406CC8F8.c)
 *     sub_1406D17F4 @ 0x1406D17F4 (sub_1406D17F4.c)
 *     sub_14077E628 @ 0x14077E628 (sub_14077E628.c)
 *     sub_14077EBE0 @ 0x14077EBE0 (sub_14077EBE0.c)
 *     sub_14077FB68 @ 0x14077FB68 (sub_14077FB68.c)
 *     sub_1407827B8 @ 0x1407827B8 (sub_1407827B8.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CMSPAddress::get_DynamicTerminalClasses(PCUNICODE_STRING **this, struct tagVARIANT *a2)
{
  PCUNICODE_STRING *v2; // rdi
  _QWORD *v5; // r14
  _OWORD *v6; // rax
  PCUNICODE_STRING v7; // rbx
  UNICODE_STRING *v8; // rsi
  _OWORD *v9; // r15
  const UNICODE_STRING *v10; // rcx
  int v11; // ebx
  PCUNICODE_STRING v12; // rdx
  int Length; // ecx
  wchar_t *v14; // rax
  __int16 *v15; // rdx
  PCUNICODE_STRING v16; // rdx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct _LOOKASIDE_LIST_EX *v22; // r9
  int v23; // r15d
  __int128 v24; // xmm0
  int v25; // eax
  __int64 v26; // rcx
  _QWORD *v27; // r11
  _QWORD *v28; // rax
  UNICODE_STRING *v29; // rax
  wchar_t *Buffer; // rcx
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING v32; // xmm1
  UNICODE_STRING v33; // xmm0
  int v34; // eax
  UNICODE_STRING v35; // xmm1
  const UNICODE_STRING *v36; // rax
  UNICODE_STRING v37; // xmm0
  __int64 v38; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v41[2]; // [rsp+68h] [rbp-98h] BYREF
  _OWORD *v42; // [rsp+78h] [rbp-88h] BYREF
  PVOID P[2]; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING String1; // [rsp+90h] [rbp-70h] BYREF
  __int64 v45[2]; // [rsp+A0h] [rbp-60h] BYREF
  GUID ActivityId; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD *v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  wchar_t *v50; // [rsp+F0h] [rbp-10h]
  _DWORD v51[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 *v52; // [rsp+100h] [rbp+0h]
  __int64 v53; // [rsp+108h] [rbp+8h]

  v2 = *this;
  v5 = 0LL;
  LODWORD(v39) = 0;
  v6 = v2[1];
  v7 = *v2;
  v8 = 0LL;
  v9 = v2[11];
  Object = 0LL;
  *(_OWORD *)v41 = 0LL;
  v42 = v6;
  *(_OWORD *)P = 0LL;
  *(_OWORD *)v45 = 0LL;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v10 = 0LL;
  if ( !v7->Length || *v7->Buffer != 92 )
  {
    if ( !v9 )
      return 0;
    v10 = (const UNICODE_STRING *)((unsigned __int64)(v9 + 1) & -(__int64)(v9 != 0LL));
  }
  v11 = sub_14077FB68(v10, *v2, (PUNICODE_STRING)v41);
  if ( v11 >= 0 )
  {
    v38 = 0LL;
    String1 = 0LL;
    sub_14077EBE0(v41, &v38, &String1);
    if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
    {
      sub_14077EBE0(v41, &v38, &String1);
      if ( RtlEqualUnicodeString(&String1, &stru_140006FA8, 1u) )
      {
        v11 = -1073741790;
        goto LABEL_15;
      }
    }
    LODWORD(v38) = 0;
    v18 = sub_14077E628(a2, (__int64)P, (__int64)&Object, (__int64)v45, (__int64)&v39, (__int64)&v38);
    v11 = v18;
    if ( v18 == -1073741772 )
      return 0;
    if ( v18 >= 0 )
    {
      v23 = v39;
      if ( (v39 & 4) == 0 )
      {
        *((_WORD *)Object + 25) = *((_WORD *)v42 + 25);
        PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x67655256u);
        v8 = PoolWithTag;
        if ( PoolWithTag )
        {
          v32 = *(UNICODE_STRING *)v41;
          v2[10] = PoolWithTag;
          *(_QWORD *)&PoolWithTag->Length = v2[1];
          PoolWithTag[1] = **v2;
          v33 = *v2[14];
          v34 = v38;
          v8[3] = v32;
          *(_DWORD *)&v8[4].Length = v23;
          v35 = *(UNICODE_STRING *)v45;
          v8[2] = v33;
          *((_DWORD *)this + 2) = v34;
          v36 = (const UNICODE_STRING *)Object;
          v37 = *(UNICODE_STRING *)P;
          v8->Buffer = &a2->vt;
          v2[1] = v36;
          **v2 = v37;
          *v2[14] = v35;
          return (unsigned int)v11;
        }
        goto LABEL_36;
      }
      v5 = sub_1406CC8F8(v20, v19, v21, v22);
      if ( !v5 )
      {
LABEL_36:
        v11 = -1073741670;
        goto LABEL_15;
      }
      ObfReferenceObjectWithTag(a2, 0x67655256u);
      v24 = *(_OWORD *)v41;
      *v5 = a2;
      *((_DWORD *)v5 + 2) = v23 & 0xFFFFFFFB;
      *((_OWORD *)v5 + 1) = v24;
      RtlInitUnicodeString((PUNICODE_STRING)v41, 0LL);
      v25 = sub_1407827B8(this[2], v5 - 4, &v42);
      v11 = v25;
      if ( v25 >= 0 )
      {
        v11 = -1073741771;
        goto LABEL_15;
      }
      if ( v25 == -1073741772 )
      {
        v28 = *(_QWORD **)(v26 + 8);
        if ( *v28 != v26 )
          __fastfail(3u);
        *v27 = v26;
        v5 = 0LL;
        v27[1] = v28;
        *v28 = v27;
        *(_QWORD *)(v26 + 8) = v27;
        v29 = (UNICODE_STRING *)*v2;
        Buffer = (*v2)->Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0x67655256u);
          v29 = (UNICODE_STRING *)*v2;
        }
        *v29 = *(UNICODE_STRING *)P;
        RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
        *((_DWORD *)this + 3) = 872;
        v11 = -1073740541;
LABEL_5:
        if ( (unsigned int)dword_140C038A0 > 5 )
        {
          v12 = (PCUNICODE_STRING)&qword_140001AF8;
          if ( (*v2)->Buffer )
            v12 = *v2;
          Length = v12->Length;
          v14 = v12->Buffer;
          v48 = v51;
          v15 = &word_14002A8CE;
          LODWORD(v38) = -1073740541;
LABEL_19:
          v50 = v14;
          v51[0] = Length;
          v52 = &v38;
          v49 = 2LL;
          v51[1] = 0;
          v53 = 4LL;
          sub_14020A9C4((__int64)&dword_140C038A0, (unsigned __int8 *)v15, &ActivityId, 0LL, 5u, &v47);
          goto LABEL_20;
        }
        goto LABEL_20;
      }
    }
  }
  if ( v11 == -1073740541 )
    goto LABEL_5;
LABEL_15:
  if ( (unsigned int)dword_140C038A0 > 2 )
  {
    v16 = (PCUNICODE_STRING)&qword_140001AF8;
    if ( (*v2)->Buffer )
      v16 = *v2;
    Length = v16->Length;
    v14 = v16->Buffer;
    v48 = v51;
    v15 = &word_14002A976;
    LODWORD(v38) = v11;
    goto LABEL_19;
  }
LABEL_20:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x67655256u);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x67655256u);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v41[1] )
    ExFreePoolWithTag(v41[1], 0x67655256u);
  if ( v5 )
    sub_1406D17F4(v5 - 6);
  return (unsigned int)v11;
}
