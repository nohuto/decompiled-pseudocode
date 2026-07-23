/*
 * XREFs of sub_14098B4E0 @ 0x14098B4E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1405C9A5C @ 0x1405C9A5C (sub_1405C9A5C.c)
 *     sub_1408296B8 @ 0x1408296B8 (sub_1408296B8.c)
 *     sub_14086141C @ 0x14086141C (sub_14086141C.c)
 *     sub_14098B798 @ 0x14098B798 (sub_14098B798.c)
 *     sub_14098B868 @ 0x14098B868 (sub_14098B868.c)
 */

__int64 __fastcall sub_14098B4E0(char *NotificationStructure, _BYTE *Context)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // rax

  v3 = *(_QWORD *)(NotificationStructure + 4) - 0x11D046F0CB3A4006LL;
  if ( *(_QWORD *)(NotificationStructure + 4) == 0x11D046F0CB3A4006LL )
    v3 = *(_QWORD *)(NotificationStructure + 12) - 0x3F05139760008FB0LL;
  if ( !v3 )
  {
    sub_14098B798(Context);
    return 0LL;
  }
  v4 = *(_QWORD *)(NotificationStructure + 4) - 0x11D046F0CB3A4008LL;
  if ( *(_QWORD *)(NotificationStructure + 4) == 0x11D046F0CB3A4008LL )
    v4 = *(_QWORD *)(NotificationStructure + 12) - 0x3F05139760008FB0LL;
  if ( !v4 )
  {
    sub_14098B798(Context);
LABEL_9:
    sub_14098B868(Context);
    return 0LL;
  }
  v6 = *(_QWORD *)(NotificationStructure + 4) - 0x11D046F0CB3A4007LL;
  if ( *(_QWORD *)(NotificationStructure + 4) == 0x11D046F0CB3A4007LL )
    v6 = *(_QWORD *)(NotificationStructure + 12) - 0x3F05139760008FB0LL;
  if ( !v6 )
  {
    if ( (int)sub_1408296B8((__int64)Context) < 0 )
      goto LABEL_9;
    sub_1402D66A8((ULONG_PTR)(Context + 32));
    Context[64] = 1;
    sub_14086141C((__int64)Context, (const EVENT_DESCRIPTOR *)qword_140011F08);
    if ( *((_BYTE **)Context + 2) != Context + 16 )
      sub_1405C9A5C((__int64)Context);
    sub_1402935D0((ULONG_PTR)(Context + 32));
  }
  return 0LL;
}
