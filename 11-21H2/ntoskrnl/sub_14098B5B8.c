/*
 * XREFs of sub_14098B5B8 @ 0x14098B5B8
 * Callers:
 *     PoDeleteThermalRequest @ 0x14098B2F0 (PoDeleteThermalRequest.c)
 * Callees:
 *     sub_14025A904 @ 0x14025A904 (sub_14025A904.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14038AF44 @ 0x14038AF44 (sub_14038AF44.c)
 *     sub_1403C0F80 @ 0x1403C0F80 (sub_1403C0F80.c)
 *     sub_1405C9A5C @ 0x1405C9A5C (sub_1405C9A5C.c)
 *     sub_1405D4150 @ 0x1405D4150 (sub_1405D4150.c)
 *     sub_1407FD7A8 @ 0x1407FD7A8 (sub_1407FD7A8.c)
 *     sub_14081CEB4 @ 0x14081CEB4 (sub_14081CEB4.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1 @ 0x140860CFC (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1.c)
 *     sub_14086141C @ 0x14086141C (sub_14086141C.c)
 *     sub_14098B48C @ 0x14098B48C (sub_14098B48C.c)
 */

void __fastcall sub_14098B5B8(CMSPAddress *this)
{
  _QWORD *v1; // rbx
  char v3; // r14
  __int64 v4; // rdx
  CMSPAddress *v5; // rcx
  CMSPAddress **v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 4);
  memset(&Event, 0, sizeof(Event));
  v3 = 0;
  sub_1402D66A8((ULONG_PTR)(v1 + 4));
  if ( *((_BYTE *)this + 18) )
  {
    if ( v1[17] )
    {
      sub_1407FD7A8((__int64)this + 40, *((_BYTE *)this + 16));
      sub_14038AF44((__int64)this);
      sub_1403C0F80(0);
    }
    if ( v1[16] )
    {
      LOBYTE(v4) = *((_BYTE *)this + 17) == 0;
      sub_14081CEB4((__int64)this + 40, v4);
      sub_1405D4150((__int64)this);
    }
    CMSPAddress::get_DynamicTerminalClasses(this, (const EVENT_DESCRIPTOR *)&stru_140014998);
    *((_BYTE *)this + 18) = 0;
    sub_1405C9A5C((__int64)v1);
  }
  sub_1402935D0((ULONG_PTR)(v1 + 4));
  sub_1402D66A8((ULONG_PTR)&qword_140C225E0);
  sub_1402D66A8((ULONG_PTR)(v1 + 4));
  v5 = *(CMSPAddress **)this;
  if ( *(CMSPAddress **)(*(_QWORD *)this + 8LL) != this )
    goto LABEL_22;
  v6 = (CMSPAddress **)*((_QWORD *)this + 1);
  if ( *v6 != this )
    goto LABEL_22;
  *v6 = v5;
  *((_QWORD *)v5 + 1) = v6;
  if ( (_QWORD *)v1[2] != v1 + 2 )
    goto LABEL_17;
  v7 = v1[6];
  if ( v7 )
  {
    *(_QWORD *)(sub_14025A904(v7) + 64) = 0LL;
    if ( *((_BYTE *)v1 + 64) )
      sub_14086141C((__int64)v1, (const EVENT_DESCRIPTOR *)qword_1400148E8);
    v8 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) == v1 )
    {
      v9 = (_QWORD *)v1[1];
      if ( (_QWORD *)*v9 == v1 )
      {
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        *v1 = 0LL;
        goto LABEL_16;
      }
    }
LABEL_22:
    __fastfail(3u);
  }
LABEL_16:
  v3 = 1;
LABEL_17:
  sub_1402935D0((ULONG_PTR)(v1 + 4));
  sub_1402935D0((ULONG_PTR)&qword_140C225E0);
  if ( v3 )
  {
    sub_1402D66A8((ULONG_PTR)(v1 + 4));
    if ( *((_BYTE *)v1 + 67) )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v1[9] = &Event;
      sub_1402935D0((ULONG_PTR)(v1 + 4));
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      sub_1402D66A8((ULONG_PTR)(v1 + 4));
      v1[9] = 0LL;
    }
    sub_1402935D0((ULONG_PTR)(v1 + 4));
    sub_14098B48C(v1, v10);
  }
}
