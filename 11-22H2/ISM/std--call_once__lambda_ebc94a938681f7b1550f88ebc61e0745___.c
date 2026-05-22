/*
 * XREFs of std::call_once__lambda_ebc94a938681f7b1550f88ebc61e0745___ @ 0x1801D0150
 * Callers:
 *     ?Get@InfoMetadata@@SAPEAV1@XZ @ 0x1801D0B5C (-Get@InfoMetadata@@SAPEAV1@XZ.c)
 * Callees:
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x180041C68 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ??0InfoMetadata@@QEAA@XZ @ 0x1801D0378 (--0InfoMetadata@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::call_once__lambda_ebc94a938681f7b1550f88ebc61e0745___(__int64 a1, __int64 a2)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  InfoMetadata *v4; // [rsp+40h] [rbp+8h]
  __int64 fPending; // [rsp+48h] [rbp+10h] BYREF

  fPending = a2;
  if ( !__std_init_once_begin_initialize(&InfoMetadata::s_createdInfoMetadata, 0, (PBOOL)&fPending, 0LL) )
    abort();
  if ( (_DWORD)fPending )
  {
    v2 = &InfoMetadata::s_createdInfoMetadata;
    v4 = (InfoMetadata *)operator new(0x18uLL);
    InfoMetadata::s_instanceInfoMetadata = InfoMetadata::InfoMetadata(v4);
    v3 = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v2);
  }
}
