/*
 * XREFs of ??1CPropertySet@@UEAA@XZ @ 0x1800DC0C4
 * Callers:
 *     ??_GCPropertySet@@UEAAPEAXI@Z @ 0x1800DC080 (--_GCPropertySet@@UEAAPEAXI@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180025194 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1CResource@@MEAA@XZ @ 0x180049CEC (--1CResource@@MEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall CPropertySet::~CPropertySet(CPropertySet *this)
{
  int v1; // r9d
  __int64 v3; // rcx
  int v4; // r9d
  int v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v1 = *((_DWORD *)this + 38);
  *(_QWORD *)this = &CPropertySet::`vftable';
  if ( v1 && (unsigned int)dword_1803D0EF0 > 5 && tlgKeywordOn((__int64)&dword_1803D0EF0, 1LL) )
  {
    v9 = 0;
    v7 = &v5;
    v5 = v4;
    v8 = 4;
    tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_180372155, 0LL, 0LL, 3u, &v6);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 15);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 11);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
