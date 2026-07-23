/*
 * XREFs of sub_140997FD0 @ 0x140997FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     IoUnregisterPlugPlayNotificationEx @ 0x1406E7890 (IoUnregisterPlugPlayNotificationEx.c)
 *     sub_140858D04 @ 0x140858D04 (sub_140858D04.c)
 *     sub_140997F58 @ 0x140997F58 (sub_140997F58.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140997FD0(char *NotificationStructure, UNICODE_STRING *Context)
{
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v4 = 0;
  sub_1402D66A8((ULONG_PTR)&qword_140C222D0);
  v6 = *(_QWORD *)(NotificationStructure + 4) - 0x11D046F0CB3A4006LL;
  if ( *(_QWORD *)(NotificationStructure + 4) == 0x11D046F0CB3A4006LL )
    v6 = *(_QWORD *)(NotificationStructure + 12) - 0x3F05139760008FB0LL;
  if ( !v6 )
  {
    sub_140997F58((__int64)Context, v5);
    goto LABEL_14;
  }
  v7 = *(_QWORD *)(NotificationStructure + 4) - 0x11D046F0CB3A4008LL;
  if ( *(_QWORD *)(NotificationStructure + 4) == 0x11D046F0CB3A4008LL )
    v7 = *(_QWORD *)(NotificationStructure + 12) - 0x3F05139760008FB0LL;
  if ( !v7 )
  {
    sub_140997F58((__int64)Context, v5);
LABEL_13:
    v4 = 1;
    goto LABEL_14;
  }
  v8 = *(_QWORD *)(NotificationStructure + 4) - 0x11D046F0CB3A4007LL;
  if ( *(_QWORD *)(NotificationStructure + 4) == 0x11D046F0CB3A4007LL )
    v8 = *(_QWORD *)(NotificationStructure + 12) - 0x3F05139760008FB0LL;
  if ( !v8 )
  {
    sub_140858D04(*(_DWORD *)&Context[1].Length, Context + 2);
    goto LABEL_13;
  }
LABEL_14:
  sub_1402935D0((ULONG_PTR)&qword_140C222D0);
  if ( v4 )
  {
    IoUnregisterPlugPlayNotificationEx(Context[1].Buffer);
    ExFreePoolWithTag(Context, *((_DWORD *)&unk_140C04A84 + 8 * *(int *)&Context[1].Length));
  }
  return 0LL;
}
