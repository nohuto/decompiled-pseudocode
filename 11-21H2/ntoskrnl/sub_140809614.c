/*
 * XREFs of sub_140809614 @ 0x140809614
 * Callers:
 *     sub_140809838 @ 0x140809838 (sub_140809838.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14080788C @ 0x14080788C (sub_14080788C.c)
 *     sub_14080A488 @ 0x14080A488 (sub_14080A488.c)
 */

struct _KTHREAD *__fastcall sub_140809614(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, void *a5)
{
  __int64 v8; // rax
  __int64 v10; // r10
  __int64 v11; // r11
  int v12; // r9d
  char *v13; // r8
  unsigned __int64 v14; // rdx
  _DWORD *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx

  qword_140C22050 = (__int64)a2;
  qword_140C22048 = a3;
  memset(a5, 0, 0x148uLL);
  v8 = *a2;
  if ( !*a2 )
    v8 = a2[1];
  if ( v8 )
  {
    sub_14080A488((char *)&unk_140C20050 + 104 * (unsigned int)dword_140C20048);
    goto LABEL_5;
  }
  v10 = 0LL;
  v11 = 0LL;
  v12 = 1;
  while ( 1 )
  {
    v13 = (char *)&unk_140C20050 + 104 * (((unsigned __int8)dword_140C20048 - (unsigned __int8)v12) & 7);
    v14 = (*((_QWORD *)v13 + 3) - *((_QWORD *)v13 + 2)) / 0xAuLL;
    if ( *(_DWORD *)v13 == 2 )
    {
      *((_BYTE *)a5 + 272) = 1;
      v11 = (__int64)v13;
      *((_QWORD *)a5 + 38) = v14;
      *((_DWORD *)a5 + 78) = *((_DWORD *)v13 + 10);
      *((_DWORD *)a5 + 80) = *((_DWORD *)v13 + 12);
      *((_DWORD *)a5 + 79) = *((_DWORD *)v13 + 11);
      *((_DWORD *)a5 + 81) = *((_DWORD *)v13 + 13);
      goto LABEL_15;
    }
    if ( *(_DWORD *)v13 == 1 )
      break;
LABEL_15:
    if ( (unsigned int)++v12 > 2 )
      goto LABEL_12;
  }
  *((_QWORD *)a5 + 35) = v14;
  v10 = (__int64)v13;
  *((_DWORD *)a5 + 72) = *((_DWORD *)v13 + 10);
  *((_DWORD *)a5 + 74) = *((_DWORD *)v13 + 12);
  *((_DWORD *)a5 + 73) = *((_DWORD *)v13 + 11);
  *((_DWORD *)a5 + 75) = *((_DWORD *)v13 + 13);
LABEL_12:
  v15 = (_DWORD *)((char *)&unk_140C20050 + 104 * (unsigned int)dword_140C20048);
  sub_14080788C(v10, v11, v15);
  if ( *v15 == 3 && qword_140C5ADE8 )
    sub_14042A5E0(v17, v16);
LABEL_5:
  sub_1402935D0((ULONG_PTR)&qword_140C1FF60);
  sub_14039A210(a2, a3, a4, (__int64)a5);
  if ( qword_140C5ADA0 )
    sub_14042A5E0(a2, a3);
  return sub_1402D66A8((ULONG_PTR)&qword_140C1FF60);
}
