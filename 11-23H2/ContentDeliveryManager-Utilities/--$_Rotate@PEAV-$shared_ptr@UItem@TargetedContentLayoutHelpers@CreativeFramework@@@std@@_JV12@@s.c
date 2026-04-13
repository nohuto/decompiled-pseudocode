/*
 * XREFs of ??$_Rotate@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@00PEA_J0@Z @ 0x1800CEA88
 * Callers:
 *     ??$_Buffered_rotate@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@@Z @ 0x1800CD894 (--$_Buffered_rotate@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Rotate<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,__int64,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(
        char *a1,
        __int64 a2,
        char *a3)
{
  __int64 v3; // r10
  __int64 v5; // r11
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  char *v10; // r8
  __int64 v11; // r11
  char *v12; // rdx
  char *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax

  v3 = (a2 - (__int64)a1) >> 4;
  v5 = (a3 - a1) >> 4;
  v7 = v5;
  v8 = v3;
  if ( v3 )
  {
    do
    {
      v9 = v7;
      v7 = v8;
      v8 = v9 % v8;
    }
    while ( v8 );
    if ( v7 < v5 && v7 > 0 )
    {
      v10 = &a1[16 * v7];
      v11 = 16 * v3;
      do
      {
        v12 = &v10[v11];
        v13 = v10;
        if ( &v10[v11] == a3 )
          v12 = a1;
        do
        {
          v14 = *((_QWORD *)v13 + 1);
          *((_QWORD *)v13 + 1) = *((_QWORD *)v12 + 1);
          *((_QWORD *)v12 + 1) = v14;
          v15 = *(_QWORD *)v13;
          *(_QWORD *)v13 = *(_QWORD *)v12;
          *(_QWORD *)v12 = v15;
          v16 = (a3 - v12) >> 4;
          v13 = v12;
          if ( v3 >= v16 )
            v12 = &a1[16 * (v3 - v16)];
          else
            v12 += v11;
        }
        while ( v12 != v10 );
        --v7;
        v10 -= 16;
      }
      while ( v7 > 0 );
    }
  }
}
